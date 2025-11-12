#include <stdio.h>
#include <string.h>

int main(){
	char a[] = "Hello world";
	int length = strlen(a); 
	int count = 1;
	
	for(int i = 0; i < length; i++){
		if (a[i] == ' '){
			count++;
		}
	}
	printf("So tu xuat hien trong chuoi la: %d", count);
	return 0;
}

 
