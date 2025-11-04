#include <stdio.h>\\

//{8, 7, 6, 1, 2, 3}
// 0  1  2  3  4  5

//khai bao de su dung ham sap xep (Tim va ðat lai vi tri) 
void selectionSort(int a[], int n){
	int i, j, min;
	//di chuyem ranh gioi cua ham sap xep
	for(int i = 0; i < n; i++){
		//thuc hien tim phan tu nho nhat cua mang chua duoc sap xep
		min = i;
		for(j = i + 1; j < n; j++){
			if (a[j] < a[min]){
				min = j;
			}
		}
		//sau khi vong lap for dau tien ket thuc sap xep lai phan tu nho nhat vao vi tri dau tien
		int temp = a[min];
		a[min] = a[i];
		a[i] = temp;	
	}
} 
// o day a[j ] se tim phan tu nho nhat va in san gvi tri dau
//a[i] se day cac gia tri da ktra sang ben phai 

//goi ham in ra man hinh 
void printfA(int a[], int n){
	for(int i = 0; i < n; i++){
		printf ("%5d", a[i]);
	}
	printf ("\n");
}

int main(){
	int a[] = {8, 7, 6, 1, 2, 3};
	int n = sizeof(a) / sizeof (a[0]);
	
	printf ("Mang da khai bao la: \n");
	printfA(a, n);
	
	selectionSort(a, n);
	printf ("Mang sau khi sap xep la: \n");
	printfA(a, n);
	
	return 0;
}
