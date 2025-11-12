#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void capitalize_words(char *a);
int main(){
	char a[] = "hello world";
	printf ("Chuoi ban dau cua ban la: ""hello world""\n");
	
	capitalize_words(a);
	printf ("Chuoi cua ban sau khi cap nhat la: %s\n",a);
	
	return 0;
}

void capitalize_words(char *a){
	//kiem tra mang rongx hoac NULL
	if (a == NULL || strlen(a) == 0){
		return;
	}
	
	bool new_word = true;
	
	int n = strlen(a);
	
	for(int i = 0; i < n; i++){
		if (isspace(a[i])){
			new_word = true;
		} else {
			if (new_word){
				a[i] = toupper(a[i]);
				new_word = false;
			} else {
				a[i] = tolower(a[i]);
			}
		}
	}
}
