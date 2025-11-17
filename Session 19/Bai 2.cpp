#include <stdio.h> 
#include <stdbool.h>

#define MAX 100

void clear_input();
void input_arr(int *a, int *n);
void countEvenOdd(int *arr, int n, int *even, int *odd);

int main(){
	int arr[MAX];
	int n = 0;
	int even_count = 0; //chan
	int odd_count = 0; //le
	
	input_arr(arr, &n);
	
	countEvenOdd(arr, n, &even_count, &odd_count);
	
	printf ("---KET QUA CUA BAN LA---");
	printf ("Tong so phan tu: %d\n", n);
	printf ("Tong cac so chan la: %d\n", even_count);
	printf ("Tong cac so le la: %d\n", odd_count);
	
	return 0;
}

void clear_input(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void input_arr(int *arr, int *n){
	int size_input;
	do{
		printf ("Moi ban nhap vao so phan tu cua mang: ");
		if (scanf("5d", &size_input) != 1 || size_input < 0 || size_input > MAX){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
		} else {
			clear_input;
			break;
		}
	} while (1);
	
	*n = size_input;
	
	printf ("Nhap vao cac phan tu cua mang:\n");
	for (int i = 0; i < size_input; i++){
		do{
			printf ("arr[%d]: ");
			if (scanf("%d", arr + 1) != 1){
				printf ("Loi nhap lieu vui long nhap lai!!!\n");
				clear_input();
			} else {
				clear_input();
				break;
			}
		} while (1);
	}
}

void countEvenOdd(int *arr, int n, int *even, int *odd){
	*even = 0;
	*odd = 0;
	
	int *current = arr;
	int *end = arr + n;
	
	while (current < end){
		if (*current % 2 == 0){
			(*even)++;
		} else {
			(*odd)++;
		}
		current++;
	}
}



