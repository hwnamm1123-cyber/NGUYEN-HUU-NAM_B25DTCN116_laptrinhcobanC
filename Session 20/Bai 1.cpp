#include <stdio.h>
#include <string.h>

struct student {
	char name[50];
	int age;
	char phone_number[10];
};

int main(){
	struct student student1;
	
	strcpy(student1.name, "Nguyen Huu Nam");
	student1.age = 18;
	strcpy(student1.phone_number, "0984432122");
	
	printf ("----THONG TIN SINH VIEN------\n");
	printf("Ten: %s\n", student1.name);
    printf("Tuoi: %d\n", student1.age);
    printf("So dien thoai: %s\n", student1.phone_number);
    
    return 0;
}
