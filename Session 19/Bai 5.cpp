#include <stdio.h>
#include <string.h>
#define MAX 100

void clear_input();
void input_arr(int *arr, int *n);
void input_arr2(int *arr2, int n);
void printf_arr (int *arr, int n);
void printf_arr (int *arr2, int n);
int compareArrays(int *arr, int *arr2, int n);

int main(){
	int arr[MAX];
	int arr2[MAX];
	int n = 0;
	
	input_arr(arr, &n);
	printf_arr(arr, n);
	
	input_arr(arr2, &n);
	printf_arr(arr2, n);
	
	int value =  compareArrays(arr, arr2, n);
	
	if (value == 1){
        printf("Mang arr va arr2 giong nhau.\n");
    }

    if (value == 0){
        printf("Mang arr va arr2 khac nhau.\n");
    }
	
	
	return 0;
}

void clear_input(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void input_arr(int *arr, int *n){
	int size_arr;
	printf ("---KHAI BAO MANG THU NHAT---\n");
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

void input_arr2(int *arr2, int n){
	printf ("---KHAI BAO MANG THU HAI---\n");
	printf ("Moi ban nhap gia tri cho phan tu: ");
	for (int i = 0; i < n; i++){
		do{
			printf("arr2[%d]: ");
			if(scanf("%d", arr2 + 1) != 1){
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

void printf_arr2 (int *arr2, int n){
	printf ("Mang hien tai cua ban la: { ");
	for (int i = 0; i < n; i++){
	 	printf ("%2d", arr2[i]);
		if(i < n - 1){
			printf (", ");
		} 
	} 
	printf (" }\n");
}

int compareArrays(int *arr, int *arr2, int n){
	for (int i = 0; i < n; i++){
        if (arr[i] != arr2[i]){
            return 0;
        }
    }
    return 1;
}

