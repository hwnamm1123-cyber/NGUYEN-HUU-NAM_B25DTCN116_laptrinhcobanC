#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
	char a[MAX];
	int length;
	
	printf ("Moi ban nhap vao chuoi ki tu: ");
	if(fgets(a, sizeof(a), stdin) == NULL){
		printf ("Loi nhap lieu, vui long nhap lai !!!");
		return 1;
	}
	
	length = strlen(a);
	
	if(length > 0 && a[length - 1] == '\n'){
		a[length - 1] = '\0';
		length--;
	}
	
	printf ("Chuoi ban da nhap la: %s\n", a);
	printf ("Do dai cua chuoi la: %d ky tu.\n", length);
	
	for (int i = 0; i < length; i++) {
        printf("%c", a[i]);
        printf(". ");
    }
    printf("\n");
	
	return 0;
}
