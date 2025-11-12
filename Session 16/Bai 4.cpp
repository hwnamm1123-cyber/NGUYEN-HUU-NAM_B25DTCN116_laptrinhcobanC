#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
	char a[MAX];
	char target_char;
	int count = 0;
	int length;
	
	printf ("Moi ban nhap vao chuoi ki tu bat ky: ");
	if(fgets(a, sizeof(a), stdin) == NULL){
		printf ("Loi nhap lieu !!!");
		return 1;
	}
	
	length = strlen(a);
	if(length > 0 && a[length - 1] == '\n'){
		a[length - 1] = '\0';
		length--;
	}
	
	printf ("Moi ban nhap vao ki tu bat ky: ");
	if(fgets(a, sizeof(a), stdin) == NULL){
		printf ("Loi nhap lieu !!!");
		return 1;
	}
	
	for(int i = 0; i < length; i++){
		if (a[i] == target_char){
			count++;
		}
	} 
	printf ("So lan xuat hien cua ki tu %s la: %d", target_char, count++);

	return 0;
}
