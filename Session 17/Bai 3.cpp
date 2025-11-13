#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX 100

int main(){
	char a[MAX];
	char a2[MAX];
	int length, length2;
	
	bool input_valid = false;
	
	do{
		printf ("Moi ban nhap vao chuoi thu nhat: ");
		if(fgets(a, sizeof(a), stdin) == NULL){
			printf ("Loi nhap lieu, vui long nhap lai !!!");
			continue;
		}
		int length = strlen(a);
		if(length > 0 && a[length - 1] == '\n'){
			a[length - 1] = '\0';
			length--;
		}
		if (length > 0){
			input_valid = true;
		} else {
			printf ("Vui long khong de mang trong !!!\n");
		}
	} while (!input_valid);
	
	do{
		printf ("Moi ban nhap vao chuoi thu nhat: ");
		if(fgets(a2, sizeof(a2), stdin) == NULL){
			printf ("Loi nhap lieu, vui long nhap lai !!!");
			continue;
		}
		int length2 = strlen(a2);
		if(length > 0 && a2[length - 1] == '\n'){
			a[length - 1] = '\0';
			length--;
		}
		if (length2 > 0){
			input_valid = true;
		} else {
			printf ("Vui long khong de mang trong !!!\n");
		}
	} while (!input_valid);
	
	strcat(a, " ");
	strcat(a, a2);
	printf("Chuoi dich sau khi noi: %s\n", a);
	
	return 0;
}
