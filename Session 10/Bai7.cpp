#include <stdio.h>

int binarySaerch(int a[], int size, int x){
	int l = 0;
	int r = size - 1;
	int mid = l + (r - l) / 2;
	while (l <= r){
		if (a[mid]  == x)
			return mid;
		if (a[mid] < x)
			l = mid + 1;
		else 
			r = mid - 1;
	}
	return -1;
}

void bubblerSort (int a[], int n){
	int i, j, temp;
	for (i = 0; i < n ; i++){
		for (j = 0; j < n - i -1; j++){
			if (a[j] > a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main(){
	int a[5] = {5,4,3,2,1}, n;
	n = sizeof(a) / sizeof (int);
	int value, result_index = -1;
	
	printf ("---MANG DA KHAI BAO---\n");
	printf ("5    4    3    2    1\n");
	 
	bubblerSort(a, n);
	printf ("\n--MANG SAU KHI DA SAP XEP---\n");
	for(int i = 0; i < n; i++){
		printf ("%5d", a[i]);
	}
	
	printf ("\n");
	printf ("\n---TIM KIEM PHAN TU TRONG MANG---\n");
	do{
		printf ("Moi ban nhap vao gia tri can tim: ");
		if (scanf("%d", &value) != 1){
			printf ("Loi nhap lieu, vui long nhap vao so can tim.");
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			continue;
		}
		int c;
		while ((c = getchar()) != '\n' && c != EOF);
		break;
	} while (1);
	
	result_index = binarySaerch(a, n, value);
	if (result_index == -1){
		printf ("\nKhong tim thay phan tu %d trong mang.\n", value);
	} else {
		printf ("Tim thay gia tri %d tai vi tri a[%d].\n", value, result_index);
	}
	
	return 0;
}
