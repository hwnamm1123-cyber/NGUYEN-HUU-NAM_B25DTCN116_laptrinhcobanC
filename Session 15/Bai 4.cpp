#include <stdio.h>

int sum(const int a[], int size);

int main(){
	int numbers[] = {10, 5, 20, 8, 15};
	int n = sizeof(numbers) / sizeof(numbers[0]);
	
	int total_sum = sum(numbers, n);
	printf ("---TINH TONG CAC PHAN TU NAMNG---\n");
	printf("Tong tat ca cac phan tu trong mang la: %d\n", total_sum);
	return 0;
} 

int sum(const int a[], int size){
	int sum = 0;
	for (int i = 0; i < size; i++){
		sum += a[i];
	}
	return sum;
}
