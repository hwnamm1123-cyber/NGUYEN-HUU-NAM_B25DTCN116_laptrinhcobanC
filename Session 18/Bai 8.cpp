#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 100

void input_a(char a[], int size);
void reverse_a(const char *input, char *output, int length);

int main(){
	char a[MAX]; // chuoi goc
	char reverse_a2[MAX]; // chuoi dao nguoc
	int length;
	
	input_a(a, MAX);
	
	length = strlen(a);
	
	reverse_a(a, reverse_a2, length);
	
	printf("Chuoi goc: \"%s\"\n", a);
    printf("Chuoi dao nguoc: \"%s\"\n", reverse_a2);
    
    return 0;
}

void input_a(char a[], int size){
	bool input_valid = false;
	int length;
	do{
		printf ("Moi ban nhap vao chuoi bat ky tu ban phim: ");
		if (fgets(a, sizeof(a), stdin) == NULL){
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
			printf("Vui long khong de mang trong, vui long nhap lai !!!\n");
		}
	} while (!input_valid);
}

void reverse_a(const char *input, char *output, int length){
	//khoi tao con tro ve cuoi mang
	const char *input_arr = input + (length - 1);
	//khoi tao con tro ve dau mang
	char *output_arr = output;
	for (int i = 0; i < length; i++){
		*output_arr = *input_arr;
		input_arr--;
		output_arr++;
	}
	*output_arr = '\0'; // ket thuc chuoi bang ki tu null
}

//sd con tro toi uu hon cach su dung 2 lan vong lap for va tao bien temp
