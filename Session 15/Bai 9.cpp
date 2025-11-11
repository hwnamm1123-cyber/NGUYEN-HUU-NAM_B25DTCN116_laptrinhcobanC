#include <stdio.h>

int found(int arr[], int n,int minCount) {
    minCount = n + 1;
    int minNumber = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i])
                count++;
        }

        if (count < minCount) {
            minCount = count;
            minNumber = arr[i];
        }
    }

    return minNumber;
}

int main() {
    int arr[] = {4, 3, 2, 4, 5, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minCount;
    int kq = found(arr, n,minCount);
    printf("Phan tu xuat hien it nhat la: %d, So lan xuat hien: %d", kq,minCount);

    return 0;
}
