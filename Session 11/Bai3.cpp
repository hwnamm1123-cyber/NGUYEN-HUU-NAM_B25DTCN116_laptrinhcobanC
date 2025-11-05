#include <stdio.h> 

int binarySearch(int a[], int size, int x){
	int l = 0;
	int r = size - 1;
	while (l <= r){
		int mid = l + (r - l) / 2;
		if (a[mid] == x)
			return mid;
		if (a[mid] < x)
			l = mid + 1;
		else
			r = mid - 1;
	} 
	return -1;
} 

int main(){
	int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n;
	n = sizeof(a) / sizeof(int);
	int result_index = -1;
	
	printf ("---MANG DA KHOI TAO LA---\n");
	for (int i = 0; i < n; i++){
		printf ("%5d", a[i]);
	}
	
	int value;
	printf ("\n--TIM KIEM PHAN TU---\n");
	do{
		printf ("Moi ban nhap vao gia tri can tim kiem: ");
		if (scanf("%d", &value) != 1){
			printf ("Loi nhap lieu, vui lonh nhap lai.\n");
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			continue;
		}
		int c;
		while ((c = getchar()) != '\n' && c != EOF);
		break;
	}while (1);
	
	result_index = binarySearch(a, n, value);
	if (result_index == -1){
		printf ("\nKhong tim thay gia tri can tim.");
	} else {
		printf ("\nTim thay gia tri %d tai vi tri %d", value, result_index);
	}
	
	return 0;
}
