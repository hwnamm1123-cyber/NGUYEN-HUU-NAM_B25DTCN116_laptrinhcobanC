#include <stdio.h>
#include <stdbool.h>

void printf_arr(int *arr, int size);
bool update_arr(int *arr, int new_value, int update_position, int size);

int main(){
	int number[] = {10, 20, 30, 40, 50};
	int size = sizeof(number) / sizeof (number[0]);
	int new_value = 36;
	int update_position = 2;
	printf_arr(number, size);
	
	printf("Thuc hien cap nhat: Vi tri [%d] voi gia tri %d\n", update_position, new_value);
	if (update_arr(number, new_value, update_position, size)){
		printf ("Cap nhat thanh cong !!!\n");
	} else {
		printf ("Cap nhat that bai, vi tri khonng hop le !!!\n");
	}
	
	printf_arr(number, size);
	
	return 0;
}

void printf_arr(int *arr, int size){
	printf ("Mang hien tai [ ");
	for (int i = 0; i < size; i++){
		printf ("%3d", arr[i]);
	}
	printf (" ]\n");
}

bool update_arr(int *arr, int new_value, int update_position, int size){
	if (update_position >= 0 && update_position < size){
		*(arr + update_position) = new_value;
		return true;
	}
	return false;
}
