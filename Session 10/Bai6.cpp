#include <stdio.h>

void bubbleSort(int a[], int n){
	int i, j, temp;
	for(i = 0; i < n - 1; i++){
		for (j = 0; j < n - 1 - i; j++){
			if (a[j] > a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int linearSearchAll(int a[], int n, int x, int found_indices[]){
	int count = 0;
	for (int i = 0; i < n; i++){
		if (a[i] == x){
			found_indices[count] = i;
			count++;
		}
	}
	return count; //tra ve tong so lan tim thay
}

void printArray(int a[], int size){
	for(int i = 0; i < size; i++){
		printf ("%5d", a[i]);
	}
	printf ("\n");
}

int main(){
	int a[] = {1, 3, 5, 4, 5, 2, 5};
	int n = sizeof(a) / sizeof(a[0]);
	int found_count = 0; //so luong tim thay
	int search_value; //gia tri tim kiem.
	int found_indices[100]; //vi tri tim kiem.
	
	printf ("Mang da khai bao la: \n");
	printArray(a, n);
	
	bubbleSort(a, n);
	printf ("Mang sau khi da sap xep la: \n");
	printArray(a, n);
	
	int flag = 0;
	do{
		printf ("Moi ban nhap vao gia tri can tim: ");
		if(scanf("%d", &search_value) !=
		 1){
			printf ("Loi nhap lieu");
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			flag = 0;
		} else {
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			flag =1;
		}
	} while (search_value == 0); 
	
	found_count = linearSearchAll(a, n, search_value, found_indices);
	
	if (found_count > 0){
		printf ("Tim thay phan tu tai vi tri: ", found_count); 
		
		//vong lap in ra vi tri
		for (int i = 0; i < found_count; i++){
			printf ("%5d", found_indices[i]);
		}
	printf ("\n");
	} else {
		printf ("Khong tim thay phan tu");
	}
	
	return 0;
	
}

 
