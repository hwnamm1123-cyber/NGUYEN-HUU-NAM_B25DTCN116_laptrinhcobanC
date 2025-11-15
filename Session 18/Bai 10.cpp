#include <stdio.h>

void delete_char (int *a, int *size, int *index);
void print_array(int arr[], int size);

int main(){
	int number[] = {15, 25, 35, 36, 45, 55, 65};
	int size = sizeof(number) / sizeof (number[0]);
	int index_delete = 2;
	
	printf ("Mang ban dau cua ban la: \n");
	print_array(number, size);
	
	delete_char(number, &size, &index_delete);
	
	printf ("Mang cua ban sau khi xoa phan tu tai vi tri %d la:\n", index_delete);
	print_array(number, size);
	
	return 0;
}

void print_array(int arr[], int size){
	printf ("{ ");
	for (int i = 0; i < size; i++){
		printf ("%2d", arr[i]);
		if (i < size - 1){
			printf (", ");
		}
	} 
	printf (" }\n");
}

void delete_char (int *a, int *size, int *index){
	int char_incdex = *index;
	int arr_size = *size;
	for (int i = char_incdex; i < arr_size - 1; i++){
		a[i] = a[i + 1];
	}
	(*size)--;
}
