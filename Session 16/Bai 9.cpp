#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_SIZE 50

int main(){
	char a[] = "Hello world";
	char input[MAX_SIZE]; //mang nhap vao 
	char char_delete = '\0';
	int length; //do dai cua input
	int length2 = strlen(a); //do dai cua chuoi goc
	
	printf ("Chuoi ban dau la: Hello World\n");
	
	bool input_valid = false;
	do{
		printf ("Moi ban nhap vao ky tu can xoa: ");
		if (fgets(input, sizeof(input), stdin) == NULL){
			printf ("Loi nhap lieu, vui long nhap lai!!!\n");
			continue;
		}
		length = strlen(a);
		if (length > 0 && input[length - 1] == '\n'){
			input[length - 1] = '\0';
			length--;
		}
		if (length > 0){
			char_delete = input[0];
			input_valid = true;
		} else {
			printf ("Vui long khong de trong !!!\n");
			printf ("Moi ban nhap lai !!!\n");
		}
	} while (!input_valid);
	
	int j = 0;
	for (int i = 0; i < length; i++){
		if (a[i] != char_delete){
			a[j] = a[i];
			j++;
		}
	}
	length2 = j;
	
	printf ("Chuoi cua ban sau khi xoa la: ");
	for (int i = 0; i < length2; i++){
  	 	printf ("%c", a[i]);
	}
	printf("\n");
	
	return 0;
}
