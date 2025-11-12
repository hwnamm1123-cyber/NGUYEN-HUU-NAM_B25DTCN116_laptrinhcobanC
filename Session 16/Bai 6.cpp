#include <stdio.h>
#include <string.h> 
#include <ctype.h>

int main(){
	char a[] = "Hello world 123!";
	int length = strlen(a);
	int char_count = 0;
	
	for (int i = 0; i < length; i++) {
        if (isalpha(a[i])) {
            char_count++;
        }
    }
    printf("Tong so ky tu la chu cai trong chuoi la: %d\n", char_count);
    return 0;
} 
