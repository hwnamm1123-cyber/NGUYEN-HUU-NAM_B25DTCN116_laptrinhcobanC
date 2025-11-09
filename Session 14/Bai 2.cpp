#include <stdio.h>

void printArr(int a[], int size); 

int main(){
	int a[5] = {10, 20, 30, 40, 50};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Mang ban dau la:\n");
    printArr(a, n);
    return 0;
} 
void printArr(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]); 
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}
