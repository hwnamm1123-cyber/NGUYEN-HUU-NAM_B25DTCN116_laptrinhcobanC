#include <stdio.h>

int find_numberMost(const int a[], int size, int *maxCount);

int main(){
	int a[] = {1, 3, 2, 4, 3, 5, 3, 6, 3, 7, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int max_count = 0;
    
    int most_number = find_numberMost(a, n, &max_count);
    printf("---CHUONG TRINH TIM PHAN TU XUAT HIEN NHIEU NHAT---\n");
    printf("Phan tu xuat hien nhieu nhat la: %d\n", most_number); 
    printf("So lan xuat hien la: %d\n", max_count);
    
    return 0;
}

int find_numberMost(const int a[], int size, int *maxCount){
	if (size <= 0) {
        *maxCount = 0;
        return 0; 
    }

    int mostNumber = a[0]; 
    *maxCount = 1; 

    for (int i = 0; i < size; i++) {
        int count1 = a[i];
        int count2 = 1;

        for (int j = i + 1; j < size; j++) {
            if (a[j] == count1) {
                count2++;
            }
        }

        if (count2 > *maxCount) {
            *maxCount = count2;
            mostNumber = count1;
        }
    }

    return mostNumber;
}
