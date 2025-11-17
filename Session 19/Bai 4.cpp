#include <stdio.h>

#define MAX 100

void clear_input();
void input_arr(int *arr, int *n);
void printf_arr (int *arr, int n);
void countValue(int *arr, int n, int *x);

int main(){
	int arr[MAX];
	int n = 0;
	int x = 0;
	
	input_arr(arr, &n);
	printf_arr(arr, n);
	
	countValue(arr, n, &x);
	return 0;
}

void clear_input(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void input_arr(int *arr, int *n){
	int size_arr;
	do{
		printf ("Moi ban nhap vao so luong phan tu trong mang: ");
		if (scanf("%d", &size_arr) != 1 || size_arr < 0 || size_arr > MAX){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
		} else {
			clear_input();
			break;
		}
	} while (1);
	
	*n = size_arr;
	
	printf ("Moi ban nhap gia tri cho phan tu: ");
	for (int i = 0; i < *n; i++){
		do{
			printf("arr[%d]: ");
			if(scanf("%d", arr + 1) != 1){
				printf ("Loi nhap lieu, vui long nhap lai !!!\n");
				clear_input();
			} else {
				clear_input();
				break;
			}
		} while (1);
	}
}

void printf_arr (int *arr, int n){
	printf ("Mang hien tai cua ban la: { ");
	for (int i = 0; i < n; i++){
	 	printf ("%2d", arr[i]);
		if(i < n - 1){
			printf (", ");
		} 
	} 
	printf (" }\n");
}

void countValue(int *arr, int n, int *x){
	int find_value = 0;
	int count = 0;
	do{
		printf ("Moi ban nhap vao so phan tu can tim: ");
		if (scanf("%d", &find_value) != 1){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
		} else {
			clear_input();
			break;
		}
	} while (1);
	
	*x = find_value;
	for(int i = 0; i < n; i++){
		if (arr[i] == *x);
		count++;
	}
	if (count == 0){
		printf ("Khong tim thay gia tri cua %d trong mang !!!\n", *x);
	} else {
		printf ("Tim thay gia tri %d voi tan suat xuat hien la: %d lan !!!\n", *x, count);
	}
}



