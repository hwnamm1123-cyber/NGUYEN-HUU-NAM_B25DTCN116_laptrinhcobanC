#include <stdio.h>

int binarySearch(int a[], int n, int target);

int main(){
	int a[] = {10, 15, 20, 25, 30, 35, 40, 45, 50}; 
    int n = sizeof(a) / sizeof(a[0]);
    int targetValue1 = 30;
    int targetValue2 = 18;

    printf("---CHUONG TRINH TIM KIEM NHI PHAN---\n");
    printf("Mang da sap xep: {10, 15, 20, 25, 30, 35, 40, 45, 50}\n");
    
    int index1 = binarySearch(a, n, targetValue1);
    
    if (index1 != -1) {
        printf("Tim kiem gia tri %d: Tim thay tai chi so %d.\n", targetValue1, index1);
    } else {
        printf("Tim kiem gia tri %d: Khong tim thay.\n", targetValue1);
    }

    int index2 = binarySearch(a, n, targetValue2);
    if (index2 != -1) {
        printf("Tim kiem gia tri %d: Tim thay tai chi so %d.\n", targetValue2, index2);
    } else {
        printf("Tim kiem gia tri %d: Khong tim thay.\n", targetValue2);
    }
    
    
    return 0;
}

int binarySearch(int a[], int n, int target) {
    int l = 0;  
    int r = n - 1;    
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] == target) {
            return mid; 
        } 
        else if (a[mid] < target) {
            l = mid + 1;
        } 
        else { 
            r = mid - 1; 
        }
    }
    return -1;
}
