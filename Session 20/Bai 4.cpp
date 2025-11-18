#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_PHONE_LEN 10
#define MAX_STUDENTS 50 //do dai cua mang sinh vien 
#define NUM_TO_INPUT 5 // so luong sinh vien can nhap

struct student {
	int id;
	char name[MAX_NAME_LEN];
	int age;
	char phone_number[MAX_PHONE_LEN];
};

void input_student (student *sv, int next_id){
	sv->id = next_id;
	printf ("Nhap ten sinh vien: ", MAX_NAME_LEN - 1);
	fgets(sv->name, MAX_NAME_LEN, stdin);
	sv->name[strcspn(sv->name, "\n")] = 0;
	
	printf("nhap tuoi sinh vien: ");
	while (scanf("%d", &sv->age) != 1 || sv->age <= 0){
		printf ("Du lieu khong hop le, vui long nhap lai !!!\n");
		int c;
		while ((c = getchar()) != '\n' && c != EOF);
	}
	int c;
	while((c = getchar()) != '\n' && c != EOF);
	
	printf ("Nhap vao so dien thoai sinh vien: ", MAX_PHONE_LEN - 1);
	fgets(sv->phone_number, MAX_PHONE_LEN, stdin);
	sv->phone_number[strcspn(sv->phone_number, "\n")] = 0;
}

void printf_student (const student *sv) {
    printf("| %2d | %-20s | %-4d | %-17s |\n", 
    sv->id, 
    sv->name, 
	sv->age, 
    sv->phone_number);
}

int main(){
	struct student list_student[MAX_STUDENTS];
	int start_id = 1;
	int count = 0; // so luong da nhap
	
	printf("---NHAP THONG TIN %d SINH VIEN---\n", NUM_TO_INPUT);
	for (int i = 0; i < NUM_TO_INPUT; ++i) {
        printf("\nNhap thong tin Sinh vien thu %d (ID: %d)\n", i + 1, start_id);
        input_student(&list_student[i], start_id);

        start_id++;      
        count++;    
    }

    printf("\n---DANH SACH SINH VIEN DA NHAP (%d sinh vien)---\n", count);
    printf("--------------------------------------------------------\n");
    printf("| ID | Ten                  | Tuoi | So Dien Thoai     |\n");
    printf("--------------------------------------------------------\n");
    for (int i = 0; i < count; ++i) {
        printf_student(&list_student[i]);
    }
    printf("--------------------------------------------------------\n");

    return 0;
}
