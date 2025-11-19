#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50

typedef struct{
	char name[MAX_NAME_LENGTH];
    int age;
    float grade;
} Student;

void clear_input(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void input_student_infor (Student *s, int index){
	printf ("---Nhap vao thon tin hoc sinh  thu %d---\n", index);
	printf ("Nhap ten: ");
	if (fgets(s->name, sizeof(s->name), stdin) != NULL){
		size_t len = strlen(s->name);
		if (len > 0 && s->name[len - 1] == '\n'){
			s->name[len - 1] = '\0'; 
		}
	}
	
	do {
        printf("Nhap tuoi: ");
        if (scanf("%d", &s->age) != 1 || s->age < 0) {
            printf("Vui long nhap so nguyen khong am.\n");
            clear_input();
        } else {
            clear_input();
            break;
        }
    } while (true);
    
    do {
        printf("Diem trung binh: ");
        if (scanf("%f", &s->grade) != 1 || s->grade < 0){
            printf("Vui long nhap diem so khong am.\n");
            clear_input();
        } else {
            clear_input();
            break;
        }
    } while (true);
}

void print_student_info(const Student *s, int index){
    printf("---TIM THAY HOC SINH THU %d---\n", index);
    printf("  Ten: %s\n", s->name);
    printf("  Tuoi: %d\n", s->age);
    printf("  Diem trung binh: %.2f\n", s->grade);
}

void search_student_name (const Student students[], int n, const char *search_name){
	bool found = false;
	for (int i = 0; i < n; i++){
		if (strcmp(students[i].name, search_name) == 0 ){
			print_student_info(&students[i], i + 1);
			found = true;
		}
	}
	if (!found){
		printf ("Khong tim thay hoc sinh nao co ten %s\n", search_name);
	}
}

int main(){
	Student students[MAX_STUDENTS];
	char search_name[MAX_NAME_LENGTH];
	
	for (int i = 0; i < MAX_STUDENTS; i++){
		input_student_infor(&students[i], i + 1);
	}
	
	printf ("Nhap ten hoc sinh can tim kiem: ");
	if(fgets(search_name, sizeof(search_name), stdin) != NULL){
		size_t len = strlen(search_name);
		if(len > 0 && search_name[len - 1] == '\n'){
			search_name[len - 1] = '\0';
		}
	} else {
		printf ("Loi nhap lieu !!!\n");
		return 1; //goi trong ham main can retturn ve 1
	}
	
	search_student_name(students, MAX_STUDENTS, search_name);
	
	return 0;
}
