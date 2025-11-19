#include <stdio.h>
#include <string.h>

typedef struct {
	char name[50];
	int age;
	float grade;
} Students;

void clear_input(){
	int c;
	while ((c = getchar()) != 1 && c != EOF);
}
void input_Students(Students *sv){
	printf ("---NHAP VAO THONG TIN SINH VIEN---\n");
	do{
		printf ("Moi ban nhao ten sinh vien (Toi da 50 phan tu): ");
		if(fgets(sv->name, sizeof(sv->name), stdin) != NULL){
			size_t len = strlen(sv->name);
			if (len > 0 && sv->name[len - 1] == '\n'){
				sv->name[len - 1] = '\0';
			}
		} else {
			printf ("Loi nhap ten =, vui long nhap lai!!!\n");
		}
	} while (1);
	
	do{
		printf ("Nhap tuoi sinh vien: ");
		if (scanf("%d", &sv->age) != 1 || sv->age < 0){
			printf ("Loi nhap lieu, vui long nhap lai!!!\n");
			clear_input();
			continue;
		}
		clear_input();
		break;
	} while (1);
	
	do{
		printf ("Moi ban nhap vao diem trung binh: ");
		if (scanf("%d", &sv->grade) != 1 || sv->grade < 0){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
			continue;
		}
		clear_input();
		break;
	} while (1);
	printf("Nhap thong tin thanh cong!\n");
}

void printf_students_infor(const Students *sv){
	printf ("---THONG TIN SINH VIEN DA NHAP---\n");
	printf ("Ten sinh vien: %s\n", sv->name);
	printf ("Tuoi sinh vien: %d\n", sv->age);
	printf ("Diem trung binh: %.2f\n", sv->grade);
}

int main(){
	Students student1;
	input_Students(&student1);
	printf_students_infor(&student1);
	return 0;
}
