#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX 100

int main(){
	char a[MAX];
	int length;
	
	bool input_valid = false;
	
	do{
		printf ("Moi ban nhap vao chuoi bat ky tu ban phim: ");
		if(fgets(a, sizeof(a), stdin) == NULL){
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
			printf ("Vui long khong de mang trong !!!\n");
		}
	} while (!input_valid);
	
	int count = 0, temp = 0;
	int j = 0;
	int start_word = 0, max_start = 0;
	a[length] = ' '; 
	length++;
	
	for (int i = 0; i < length; i++){
		if(a[i] != ' '){
			count++;
		} else {
			if (count > temp){
				temp = count;
				max_start = start_word;
			}
			count = 0;
			start_word = i + 1;
		}
	}
	if(temp > 0){
		printf ("Tu dai nhat la: ");
		for (int i = 0; i < temp; i++){
			printf ("%c", a[max_start + i]);
		}
		printf ("\n");
		printf ("Do dai cua tu dai nhat la: %d ky tu.\n", temp);
	} else {
        printf ("Khong tim thay tu hop le nao.\n");
    }
	return 0;
}
