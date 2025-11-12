#include <stdio.h>
#include <string.h> 
#include <ctype.h>

int main(){
	char a[] = "Hello my gmail is test123@gmail.com";
	int length = strlen(a);
	int char_count_digit = 0;
	int char_count_alpha = 0;
	int char_count_punct = 0;
	
	for (int i = 0; i < length; i++) {
        if (isdigit(a[i])) {
            char_count_digit++;
        }
    }
    
    for (int i = 0; i < length; i++) {
        if (isalpha(a[i])) {
            char_count_alpha++;
        }
    }
    
    for (int i = 0; i < length; i++) {
        if (ispunct(a[i])) {
            char_count_punct++;
        }
    }
    
    printf("Tong so ky tu la so trong chuoi la: %d\n", char_count_digit);
    printf("Tong so ky tu la chu cai trong chuoi la: %d\n", char_count_alpha);
    printf("Tong so ky tu la ky tu dac biet trong chuoi la: %d\n", char_count_punct);
    
    return 0;
} 
