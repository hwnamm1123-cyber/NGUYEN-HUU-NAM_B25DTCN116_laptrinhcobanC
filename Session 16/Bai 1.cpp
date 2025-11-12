#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
	char a[MAX];
	int length;
	
	printf ("Moi ban nhap vao mot chuoi bat ki: ");
	if(fgets(a, sizeof(a), stdin) == NULL){
		printf ("Loi nhap lieu\n");
		return 1;
	} 
	
	length = strlen(a);
	
	if (length > 0 && a[length - 1] == '\n'){
        a[length - 1] = '\0';
        length--; 
    }
    
    printf("Chuoi vua nhap la: %s\n", a);
    printf("Do dai cua chuoi la: %d ky tu.\n", length);
    
    return 0;
} 
