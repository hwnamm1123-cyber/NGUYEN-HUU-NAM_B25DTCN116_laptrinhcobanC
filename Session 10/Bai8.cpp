#include <stdio.h> 
 
int binarySearch(int a[], int size, int x){
	int l = 0;
	int r = size -1;
	while (l <= r){
		int mid = l + (r - l) / 2;
		if (a[mid] == 0)
			return -1;
		if (a[mid] < x)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return -1;
}

void bubbleSort(int a[], int n){
	int i, j, temp;
	for (i = 0; i < n - 1; i++){
		for (j = 0; j < n - 1 - i; j++){
			if (a[j] > a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void clearInputBtter(){
	int c;
	while((c = getchar()) != '\n' && c != EOF);
}

int main(){
	int a[6] = {5, 1, 8, 3, 2, 7};
	int n, value, result_index = -1;
	n = sizeof(a) / sizeof(int);

	printf ("---MANG BAN DAU DA CHO  LA---\n");
	printf ("5    1    8    3    2    7");
	
	bubbleSort(a, n);
	printf ("\n---MANG SAU KHI SAP XEP LA---\n");
	for(int i = 0; i < n; i++){
		printf ("%5d", a[i]);
	}
	
	printf ("\n--TIM KIEM PHAN TU--\n");
	do{
		printf ("Moi ban nhap vao gia tri cua phan tu can tim: ");
		if (scanf("%d", &value) != 1){
			printf ("Loi nhap lieu vui long nhap lai.\n");
			clearInputBtter();
			continue;
		}
		clearInputBtter();
		break;
	} while (1);
	
	result_index = binarySearch(a, n, value);
	if(result_index == -1){
		printf ("Khong tim thay phan tu %d trong mang.", value);
	} else{
		printf ("Tim thay gia tri %d tai vi tri a[%d].", value, result_index);
	}
	return 0;
}
