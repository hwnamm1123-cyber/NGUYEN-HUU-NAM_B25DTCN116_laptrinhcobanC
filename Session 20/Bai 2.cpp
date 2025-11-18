#include <stdio.h>
#include <string.h>

struct student{
	char name[50];
	int age;
	char phone_number[10];
};

void clear_input(); 
void input_student_info(struct student *s);
void print_student_info(const struct student *s);

int main(){
	struct student student1;
	
	input_student_info(&student1);
	print_student_info(&student1);
	
	return 0;
}

void clear_input(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void input_student_info (struct student *s){
	printf ("---NHAP THONG TIN SINH VIEN---\n");
	printf ("Nhap ten sinh vien: ");
	if (fgets(s->name, sizeof(s->name), stdin) != NULL){
		size_t len = strlen(s->name);
		if (len > 0 && s->name[len -1] == '\n'){
			s->name[len - 1] = '\0';
		} 
	} else {
		printf ("Loi nhap ten !!!\n");
	}
	
	do{
		printf ("Nhap tuoi: ");
		if (scanf("%d", &s->age) != 1){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input(); // xoa bnd khi nhap sai
		} else {
			clear_input(); // xoa bnd sau khi nhap thanh cong
			break;
		}
	} while (1);
	
	printf ("Nhap so dien thoai: ");
	if(fgets(s->phone_number, sizeof (s->phone_number), stdin) != NULL ){
		size_t len = strlen(s->phone_number);
		if (len > 0 && s->phone_number[len - 1] == '\n'){
			s->phone_number[len -1] = '\0';
		}
	} else {
		printf ("Loi nhap so dien thoai !!!\n");
	}
	printf ("Nhap thanh cong !!!\n");
}

void print_student_info(const struct student *s){
	printf ("\n---THONG TIN SINH VIEN DA NHAP LA---\n");
	printf ("Ten sinh vien: %s\n", s->name);
	printf ("Tuoi sinh vien: %d\n", s->age);
	printf ("So dien thoai: %s\n", s->phone_number);
}
