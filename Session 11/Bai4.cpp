#include <stdio.h> 

void bubbleSort (int a[], int n){
	int i, j, temp;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if (a[j] > a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main(){
	int a[5] = {5, 3, 4, 2, 1};
	int n;
	n = sizeof(a) / sizeof(int);
	printf ("---MANG DA KHAI BAO LA---\n");
	for(int i = 0; i < n; i++){
		printf ("%5d", a[i]);
	}
	
	bubbleSort (a, n);
	printf ("\n---MANG SAU KHI DA DUOC SAP XEP---\n");
	for(int i = 0; i < n; i++){
		printf ("%5d", a[i]);
	}
	
	return 0;
	
}
