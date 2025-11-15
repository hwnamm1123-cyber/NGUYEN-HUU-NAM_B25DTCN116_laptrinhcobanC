#include <stdio.h>
void sort_arr(int *arr, int size);
void printf_arr(int *arr, int size);

int main(){
	int number[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(number) / sizeof(number[0]);
    
    printf("Mang truoc khi sap xep: \n");
    printf_arr(number, size);
    sort_arr(number, size);
    
    printf("\nMang sau khi sap xep: \n");
  	printf_arr(number, size);

    return 0;
}

void sort_arr(int *arr, int size) {
    int temp;
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void printf_arr(int *arr, int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); 
    }
    printf("]\n");
}
