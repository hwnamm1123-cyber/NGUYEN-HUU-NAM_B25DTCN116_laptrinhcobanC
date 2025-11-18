#include <stdio.h>
#include <string.h>

#define MAX_NAME 50
#define MAX_PHONENUMBER 15
#define MAX_STUDENTS 50
#define NUM_STUDENTS 5

typedef struct {
	int id;
	char name[MAX_NAME];
	int age;
	char phone_number[MAX_PHONENUMBER];
} Students;

void clear_input(){
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}
void printf_infor_students (const Students *sv){
	printf ("| %4d | %-20s | %-4d | %-17s |\n",
	sv->id,
	sv->name,
	sv->age,
	sv->phone_number);
}

void printf_list_students (const Students list[], int n){
	printf("\n--- DANH SACH SINH VIEN HIEN TAI (%d sinh vien) ---\n", n);
    printf("----------------------------------------------------------\n");
    printf("|  ID  | Ten                  | Tuoi | So Dien Thoai     |\n");
    printf("----------------------------------------------------------\n");
    for (int i = 0; i < n; i++){
    	printf_infor_students(&list[i]);
	}
	printf ("----------------------------------------------------------\n");
}

void input_infor_students (Students *sv){
	printf ("Moi ban nhap vao ten sinh vien ");
	if (fgets(sv->name, MAX_NAME, stdin) != NULL){
		size_t len = strlen(sv->name);
		if (len > 0 && sv->name[len - 1] == '\n'){
			sv->name[len - 1] = '\0';
		}
	}
	
	do{
		printf ("Moi ban nhap vao tuoi cua sinh vien: ");
		if (scanf("%d", &sv->age) != 1 || sv->age < 0){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
			continue;
		}
		clear_input();
		break;
	} while (1);
	
	printf ("Moi ban nhap vao so dien thoai cua sinh vien: ");
	if(fgets(sv->phone_number, MAX_PHONENUMBER, stdin) != NULL){
		size_t len = strlen(sv->phone_number);
		if (len > 0 && sv->phone_number[len - 1] == '\n'){
			sv->phone_number[len - 1] = '\0';
		}
	}
}

void input_index_and_update(Students list[], int *n){
	int index;
	int current_n = *n;
	
	if (current_n >= MAX_STUDENTS) {
        printf("Danh sach da day, khong the them sinh vien moi!\n");
        return;
    }
	
	do{
		printf ("Moi ban nhap vao vi tri can them: ");
		if (scanf("%d", &index) != 1 || index < 0 || index > MAX_STUDENTS){
			printf ("Loi nhap lieu, vui long nhap trong pham vi !!!\n");
			clear_input();
			continue;
		}
		clear_input();
		break;
	} while (1);
	
	for (int i = current_n; i > index; i--){
		list[i] = list[i - 1];
	}
	(*n)++;
	
	printf("Nhap thong tin sinh vien moi vao vi tri %d \n", index);
	input_infor_students(&list[index]);
}

int main(){
	Students list_student[MAX_STUDENTS] = {
        {001, "Nguyen Van A", 20, "0901112222"},
        {002, "Tran Thi B", 21, "0903334444"},
        {003, "Le Van C", 19, "0905556666"},
        {004, "Pham Thi D", 22, "0907778888"},
        {005, "Hoang Van E", 20, "0909990000"}
    };
    int n = NUM_STUDENTS; 
    
    printf_list_students(list_student, n);
    input_index_and_update(list_student, &n);
    printf_list_students(list_student, n);
    
	return 0;
}
