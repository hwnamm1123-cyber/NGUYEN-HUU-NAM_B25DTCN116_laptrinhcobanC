#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_STUDENTS 3

typedef struct{
	char name[50];
	int age;
	float grade;
} Student;

void hienThiMenu(){
	printf ("\n+---------------------MENU---------------------+\n");
	printf ("|1. Nhap thong tin hoc sinh                    |\n");
	printf ("|2. Hien thi thong tin hoc sinh                |\n");
	printf ("|3. Tinh diem trung binh cua tat ca hoc sinh   |\n");
	printf ("|4. Thoat chuong trinh                         |\n");
	printf ("+----------------------------------------------+\n");
}

void clear_input(){
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

void input_students_infor(Student *s, int n){
	printf ("---Nhap vao thong tin sinh vien thu %d---\n", n);
	printf ("Moi ban nhap vao ten sinh vien: ");
	if (fgets(s->name, sizeof(s->name), stdin) != NULL){
		size_t len = strlen(s->name);
		if (len > 0 && s->name[len - 1] == '\n'){
			s->name[len - 1] = '\0';
		}  
	} 
	
	do{
		printf ("Moi ban nhao vao tuoi sinh vien: ");
		if (scanf("%d", &s->age) != 1 || s->age < 0){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
			continue;
		}
		clear_input();
		break;
	} while (true);
	
	do{
		printf ("Moi ban nhao vao diem sinh vien: ");
		if (scanf("%f", &s->grade) != 1 || s->grade < 0){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
			continue;
		}
		clear_input();
		break;
	} while (true);
}

void printf_student_infor (const Student *s, int n){
	printf ("---Thong tin sinh vien thu %d---\n", n);	
	printf ("Ten sinh vien: %s\n", s->name);
	printf ("Tuoi sinh vien: %d\n", s->age);
	printf ("Diem sinh vien: %.2f\n", s->grade);
}

double sum_grade_student (Student grade[], int n){
	double total = 0.0;
    
	for (int i = 0; i < n; i++){
     	total += grade[i].grade;
    }
    
    return total / n;
}

int main(){
	int choice;
	Student student[MAX_STUDENTS];
	
	do{
		hienThiMenu();
		do{
			printf ("MOi ban nhap vao lua chon: ");
			if (scanf("%d", &choice) != 1 || choice < 0 || choice > 4){
				printf ("Loi nhap lieu vui long nhap lai !!!\n");
				clear_input();
				continue;
			}
			clear_input();
			break;	
		} while (true);
		
		switch(choice){
			case 1:
				for (int i = 0; i < MAX_STUDENTS; i++){
					input_students_infor(&student[i], i + 1);	
				}
				break;
			case 2:
				for (int i = 0; i < MAX_STUDENTS; i++){	
					printf_student_infor(&student[i], i + 1);
				}
				break;
			case 3:
				double avg = sum_grade_student(student, MAX_STUDENTS);
				printf ("Tong diem trung binh cua sinh vien la: %.2f", avg);
				break;
			case 4:
				printf ("Ket thuc chuong trinh !!!\n");
				return 0;
			default:
				break;
		}
	} while (true);
	return 0;
}
