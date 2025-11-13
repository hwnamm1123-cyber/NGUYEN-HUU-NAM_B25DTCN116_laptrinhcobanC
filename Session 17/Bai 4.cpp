#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

int main(){
	char a[MAX];
	char input_delete;
	int length1 = 0;
	
	bool input_valid = false;
	
	do{
		printf ("Moi ban nhap vao chuoi bat ky: ");
		if(fgets(a, sizeof(a), stdin) == NULL){
			printf ("Loi nhap kieu vui long nhap lai !!!\n");
			continue;
		}
		int length = strlen(a);
		if (length > 0 && a[length - 1] == '\n'){
			a[length - 1] = '\0';
			length--;
		} 
		if (length > 0){
			input_valid = true;
			length1 = length;
		} else {
			printf ("VUi long khong de mang trong !!!\n");
		}
	} while (!input_valid);
	
	printf ("Moi ban nhap vao ky tu can xoa: ");
	scanf("%c", &input_delete);
	
	int j = 0;
	for(int i = 0; i < length1; i++){
		if (a[i] != input_delete){
			a[j] = a[i];
			j++;
		}
	}
	length1 = j;
	
	printf("Mang cua ban sau khi xoa la: ");
	for(int i = 0; i < length1; i++){
		printf ("%c", a[i]);
	}
	
	return 0;
}
