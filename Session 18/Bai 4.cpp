#include <stdio.h>

void print_arr(int *arr, int size);

int main(){
	int number[] = {10, 20, 30, 40, 50, 60};
	int size = sizeof(number) / sizeof (number[0]);
	
	printf ("In cac phan tu cua mang voi con tro: ");
	print_arr(number, size);
	return 0;
}

void print_arr(int *arr, int size){
	for (int i = 0; i < size; i++){
		printf("Phan tu tai vi tri [%d]: %d\n", i, *(arr + i));
	}
}
