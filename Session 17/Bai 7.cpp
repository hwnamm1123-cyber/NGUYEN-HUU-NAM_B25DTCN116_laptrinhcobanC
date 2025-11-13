#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 100

void input_string(char a[]);

int main(){
	char a[MAX];
	char a2[MAX];
	int length, length2;

	bool input_valid = false;

	do{
		printf("Moi ban nhap chuoi ky tu bat ky tu ban phim: ");
		if (fgets(a, sizeof(a), stdin) == NULL){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			continue;
		}
		length = strlen(a);
		if (length > 0 && a[length - 1] == '\n'){
			a[length - 1] = '\0';
			length--;
		}
		if (length > 0){
			input_valid = true;
		} else {
			printf ("Vui long khong de mang trong, vui long nhap lai !!!\n");
		}
	} while(!input_valid);

	do{
		printf("Moi ban nhap chuoi ky tu bat ky tu ban phim: ");
		if (fgets(a2, sizeof(a2), stdin) == NULL){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			continue;
		}
		length2 = strlen(a2);
		if (length2 > 0 && a2[length2 - 1] == '\n'){
			a2[length2 - 1] = '\0';
			length2--;
		}
		if (length2 > 0){
			input_valid = true;
		} else {
			printf ("Vui long khong de mang trong, vui long nhap lai !!!\n");
		}
	} while(!input_valid);
	
	char *result;
	
	printf ("\nChuoi A: \"%s\"\n", a);
    printf ("Chuoi B: \"%s\"\n", a2);
	
	result = strstr(a, a2);
	
	if (result != NULL){
		printf ("%s la chuoi con cua %s\n", a2, a);
	} else {
		printf ("%s khong phai la chuoi con cua %s\n", a2, a);
	}
	
	return 0;
}

