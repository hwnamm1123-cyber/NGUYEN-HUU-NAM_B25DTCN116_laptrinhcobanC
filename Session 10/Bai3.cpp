#include <stdio.h> 

//{8, 7, 6, 1, 2, 3}
// 0  1  2  3  4  5

//tao ham de giai quyet van de sap xep cac phan tu 
void insertionSort(int a[], int n){
	int i, j, temp;
	for (i = 1; i < n; i++){ // lay tu phan tu thu 1 
		temp = a[i];
		j = i - 1; // => a[j] se la phan tu thu 0
		while (j >= 0 && a[j] > temp){
			a[j + 1] = a[j];
			j = j - 1; //dat j lai ve gia tri cua phan tu 0
		} 
		a[j + 1] = temp; // chen temp vao gai tri dung
	} 
}
	
//tao ham in mang
void printArr(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}	
	
int main(){
	int a[] = {8, 7, 6, 1, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);
    
    printf("Mang ban dau: \n");
    printArr(a, n);
    
    insertionSort(a, n);  //ham sap xep 
    
    printf("Mang sau khi sap xep (tang dan): \n");
    printArr(a, n);

    return 0;
} 

//Tu duy giai quyet bai toan 
//tao 1 ham de giai quyet van de sap xep cac phan tu trong mang
//tao 1 ham de giai quyet van de in ra man hinh
// => thuc hien ham main va goi ham da tao 

