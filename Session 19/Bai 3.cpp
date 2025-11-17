#include <stdio.h>

#define MAX 100

void input_arr (int *arr, int *n);
void printf_arr (int *arr, int n);
void average(int *arr, int n);

int main(){
	int arr[MAX];
	int n = 0;
	
	input_arr(arr, &n);
	printf_arr(arr, n);
	
	average (arr, n);
	
	return 0;
}

void clear_input(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void input_arr (int *arr, int *n){
	int size_input;
	do{
		printf ("Nhap vao so luong pahan tu co trong mang: ");
		if (scanf("%d", &size_input) != 1 || size_input < 0 || size_input > MAX){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
		} else {
			clear_input();
			break;
		}
	} while (1);
	
	*n = size_input;
	
	printf ("Moi ban nhap vao gia tri cho tung phan tu: ");
	for (int i = 0; i < *n; i++){
		do{
			printf ("arr[%d]", i);
			if (scanf("%d", arr + 1) != 1){
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

void average(int *arr, int n){
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum += arr[i];
	}
	float average = sum / n;
	printf ("Gia tri trung binh cua mang la: %f", average);
}
