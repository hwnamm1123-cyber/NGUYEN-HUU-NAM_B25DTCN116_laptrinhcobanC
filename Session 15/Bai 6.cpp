#include <stdio.h>

void bubbleSort (int a[], int n);

int main(){
	int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(a) / sizeof(a[0]);

    printf("---SAP XEP MANG BANG THUAT TOAN BUBBLE SORT---\n");
    printf("Mang ban dau: ");
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    
    bubbleSort (a, n);
    printf("Mang sau khi sap xep Tang dan: ");
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    
    return 0;
}

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
