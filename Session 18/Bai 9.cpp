#include <stdio.h>
#include <stdbool.h>

void update_value (int *a, int *new_value, int *index);
void print_array(int arr[], int size);

int main(){
	int number[] = {15, 25, 35, 45, 55, 65};
	int size = sizeof(number) / sizeof(number[0]);
	int new_value = 36;
	int index = 2;
	
	printf ("Mang ban dau cua ban la:\n");
	print_array(number, size);
	
	update_value (number, &new_value, &index);
	
	printf ("Mang cua ban sau khi cap nhat la:\n");
	print_array(number, size);
	
	return 0;
}

void update_value (int *a, int *new_value, int *index){
	int target_index = *index;
	int value_assign = *new_value;
	a[target_index] = value_assign;
}

void print_array(int arr[], int size){
    printf("{ ");
    for(int i = 0; i < size; i++){
		printf ("%2d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
	}
	printf(" }\n");
}
