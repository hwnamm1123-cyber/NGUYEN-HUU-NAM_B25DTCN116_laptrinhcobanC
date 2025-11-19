#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
	char street[100]; 
    char city[50];    
    int zip;
} Address;

typedef struct {
    char name[50];
    int age;
	Address address; 
} Person;

void clear_input(){
	int c;
	while ((c = getchar()) != '\n' && c != EOF);	
}

void input_person_info(Person *p){
	printf ("--NHAP THONG TIN CA NHAN---\n");
	printf ("Moi ban nhap ten: ");
	if (fgets(p->name, sizeof(p->name), stdin) != NULL){
		size_t len = strlen(p->name);
		if (len > 0 && p->name[len - 1] == '\n'){
			p->name[len - 1] = '\0';
		} else {
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
		}
	}
	
	do{
		printf ("Moi ban nhap tuoi: ");
		if (scanf("%d", &p->age) != 1 || p->age < 0){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
			continue;
		}
		clear_input();
		break;
	} while (1);
	
	printf ("---MOI BAN NHAP VAO THONG TIN DIA CHI---\n");
	printf ("Moi ban nhap vao ten duong (street): ");
	if (fgets(p->address.street, sizeof(p->address.street), stdin) != NULL){
		size_t len = strlen(p->address.street);
		if (len > 0 && p->address.street[len - 1] == '\n'){
			p->address.street[len - 1] = '\0';
		}else {
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
		}
	}
	
	printf ("Moi ban nhap vao thanh pho (city): ");
	if (fgets(p->address.city, sizeof(p->address.city), stdin) != NULL){
		size_t len = strlen(p->address.city);
		if (len > 0 && p->address.city[len - 1] == '\n'){
			p->address.city[len - 1] = '\0';
		} else {
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
		}
	}
	
	do{
		printf ("Moi ban nhap vao ma zip: ");
		if (scanf("%d", &p->address.zip) != 1){
			printf ("Loi nhap lieu vui long nhap lai !!!\n");
			clear_input();
			continue;
		}
		clear_input();
		break;
	} while (1);
	
}

void print_person_info(const Person *p){
	printf ("---THONG TIN CUA NGUOI LA---\n");
	printf ("Ten: %s\n", p->name);
	printf ("Tuoi: %d\n", p->age);
	printf ("----THONG TIN DIA CHI---\n");
	printf ("  -Duong: %s\n", p->address.street);
	printf ("  -Thanh pho: %s\n", p->address.city);
	printf ("  -Ma zip: %d\n", p->address.zip);
}

int main(){
	Person people1;
	input_person_info(&people1);
	print_person_info(&people1);
	
	return 0;
}


