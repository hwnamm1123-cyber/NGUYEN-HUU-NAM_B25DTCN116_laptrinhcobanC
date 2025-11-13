#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h> 

#define MAX 100
void input_char(char a[], int length);

int main(){
	char a[MAX];
	char a2[MAX];
	int length, length2;
	
	input_char(a, length);
	input_char(a2, length2);
	
	int result = strcasecmp (a, a2);
	
	if(result == 0){
		printf ("Day la hai chuoi giong nhau !!!\n");
	} else {
		printf ("Hai chuoi khong giong nhau !!!\n");
	}
	return 0;
} 

void input_char(char a[], int length){
	bool input_valid = false;
	do{
		printf ("Moi ban nhap vao chuoi bat ky tu ban phim: ");
		if (fgets(a, sizeof(a), stdin) == NULL){
			printf ("Loi nhap lieu vui long nhap lai !!!");
			continue;
		}
		int length = strlen(a);
		if (length > 0 && a[length - 1] == '\n'){
			a[length - 1] = '\0';
			length--;
		}
		if (length > 0){
			input_valid = true;
		} else{
			printf ("Vui long khong de mang trong !!!");
		}
	} while (!input_valid);
}
