#include <stdio.h>

int find_max (int a[], int n);

int main(){
	int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = 9;
	int max_value;
	
	max_value = find_max(a, n);
	printf ("Mang da cho la: 1, 2, 3, 4, 5, 6, 7, 8, 9\n");
	printf ("Gia tri lon nhat trong mang la: %d", max_value);
	
	return 0;
} 

int find_max (int a[], int n){
	if (n <= 0){
		return -1; //tra ve -1 cho ham xu li
	}
	int max = a[0];
	for (int i = 0; i < n; i++){
		if (a[i] > max){
			max = a[i];
		}
	}
	return max; //ham nay tra ve gia tri max  tim duoc
}
