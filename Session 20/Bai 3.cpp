#include <stdio.h>
#include <string.h>

#define NUMBER_STUDENT 5

struct student{
	char name[50];
	int age;
	char phone_number[10];
};

void clear_input();
void input_student_info(struct student *s);
void print_student_list(const struct student studen[], int size);

int main(){
	struct student student_list[NUMBER_STUDENT];
	printf ("---NHAP THONG TIN SINH VIEN---\n");
	for(int i = 0; i < NUMBER_STUDENT; i++){
		printf ("Nhap thong tin cho sinh vien thu %d: \n", i);
		input_student_info(&student_list[i]);
	}
	print_student_list(student_list, NUMBER_STUDENT);
	return 0;
}

void clear_input(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void input_student_info(struct student *s){
	printf ("Nhap ten sinh v ien: ");
	if (fgets(s->name, sizeof(s->name), stdin) != NULL){
		size_t len = strlen(s->name);
		if (len > 0 && s->name[len - 1] == '\n'){
			s->name[len - 1] = '\0';
 		}
	}
	
	do{
		printf ("Nhap tuoi sinh vien: ");
		if(scanf("%d", &s->age) != 1){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
		} else {
			clear_input();
			break;
		}
	} while (1);
	
	printf ("Nhap so dien thoai sinh vien: ");
	if (fgets(s->phone_number, sizeof(s->phone_number), stdin) != NULL){
		size_t len = strlen(s->phone_number);
		if (len > 0 && s->phone_number[len - 1] == '\n'){
			s->phone_number[len - 1] = '\0';
		}
	}
}

void print_student_list(const struct student student[], int size){
	printf ("\n+---------------------------------------------------------------+\n");
	printf ("|                  DANH SACH SINH VIEN DA NHAP                  |\n");
	printf ("|---------------------------------------------------------------|\n");
	printf ("| STT | Ten sinh vien             | Tuoi | So dien thoai        |\n");
	printf ("|-----|---------------------------|------|----------------------|\n");
	
	for (int i = 0; i < size; i++){
		printf ("| %-3d | %-25s | %-4d | %-20s |\n",
		i + 1, 
		student[i].name,
		student[i].age,
		student[i].phone_number);
	}
	printf ("+---------------------------------------------------------------+\n");
}
