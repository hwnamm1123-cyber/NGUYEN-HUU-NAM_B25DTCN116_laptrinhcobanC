#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
	char a[MAX];
	int length;
	
	printf ("Moi ban nhap vao chuoi ki tu bat ky: ");
	if (fgets(a, sizeof(a), stdin) == NULL){
		printf ("Loi nhap lieu.\n");
		return 1;
	}
	printf("Chuoi ban dau la: %s", a);
	
	length = strlen(a);
	if(length > 0 && a[length - 1] == '\n'){
		a[length - 1] = '\0';
		length--;
	}
	
	printf("Chuoi sau khi dao nguoc la: ");
	for (int i = length - 1; i >= 0; i--){
		printf ("%c", a[i]);
	}
	
	return 0;
}
