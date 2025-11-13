#include <stdio.h>
#include <string.h>
#include <stdbool.h> 
#define MAX 100

void reverse_string (char a[], char a2[], int length);

int main(){
	char a[MAX];
	char a2[MAX];
	int length;
	
	bool input_valid = false;
	
	do{
		printf ("Moi ban nhap vao chuoi ban dau: ");
		if (fgets(a, sizeof(a), stdin) == NULL){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			continue;
		}
		length = strlen(a);
		if(length > 0 && a[length - 1] == '\n'){
			a[length - 1] = '\0';
			length--;
		}
		if (length > 0){
			input_valid = true;
		} else {
			printf ("Vui long khong de mang trong, vui long nhap lai !!!");
		}
	} while (!input_valid);
	
	printf ("Chuoi cua ban da nhap la: %s\n", a);
	
	reverse_string(a, a2, length);
	printf ("Chuoi sau khi ban da dao nguoc la: %s\n", a);
	
	int result = strcmp(a, a2);
	
	if(result == 0){
		printf ("Chuoi nay la palindrome !!!");
	} else {
		printf ("Chuoi nay khong ohai la palindrome !!!");
	}
}

void reverse_string (char a[], char a2[], int length){
	int j; 
	for (int i = length - 1; i >= 0; i--){
		a2[j] = a[i];
		j++; 
	}
	a2[length] = '\0';
}
