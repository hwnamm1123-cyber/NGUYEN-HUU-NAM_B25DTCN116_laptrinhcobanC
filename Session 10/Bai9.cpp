#include <stdio.h>

int binarySearch(int a[], int size, int x){
	int l = 0;
	int r = size -1;
	int mid = l + (r - l) / 2;
	while (l <= r){
		if (a[mid] == x)
			return mid;
		if (a[mid] < x)
			l = mid + 1;
		else 
			r = mid - 1; 
	}
	return -1;
}

void bubbleSort(int a[], int n){
	int i, j, temp;
	for(i = 0; i < n; i++){
		for(j = 0; j< n; j++){
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

int main (){
	int n;
	int a[n]; // so luong san pham
	n = sizeof(a) / sizeof (int);
	int id;
	
	printf ("---NHAP SO LUONG SAN PHAM VA GIA TIEN CUA TUNG SAN PHAM---\n");
	do{
		printf ("Moi ban nhap vao so luong phan tu: ");
		if (scanf("%d", &n) != 1 || n < 0){
			printf ("Loi nhap lieu, vui long nhap lai.\n");
			clearInputBtter();
			continue;
		}
		clearInputBtter();
		break;
	} while (1);
	
	int price[n]; //gia ca
	
	for (int i = 0; i < n; i++){
		do{
			printf ("Moi ban nhap vao gia cua san pham thu %d voi ma san pham la (ID: %d)(VND): ",i, i);
			if (scanf("%d", &price[i]) != 1 || price[i] < 0){
		 		printf ("Loi nhap lieu, vui long nhap lai.\n");
			 	clearInputBtter();
		 		continue;
		 	}
		 	clearInputBtter();
			break;
		}while (1);
	}
	
	printf ("---BANG SAN PHAM VA GIA SAN PHAM BAN DA NHAP---\n");
	printf ("Ma san pham:  ");
	for (int i = 0; i < n; i++){
		printf ("%10d", i); 
	}
	printf ("\nGia san pham: ");
	for (int i = 0; i < n; i++){
		printf ("%10d", price[i]); 
	}
	
	int search_pos;
	printf ("\n---TIM KIEM PHAN TU---\n");
	do{
		printf ("Moi ban nhap vao ID cua san pham: ");
		if (scanf("%d", &search_pos) != 1 || search_pos < 0 || search_pos >= n){
			printf ("Loi nhap lieu, vui long nhap lai.");
			clearInputBtter();
	 		continue;
		} 
		clearInputBtter();
		break;
	} while (1);
	
	printf ("Gia cua san pham voi ma ID (%d) la: %d VND", search_pos, price[search_pos]);
	
	bubbleSort(price, n);
	printf("\n--- DANH SACH GIA SAN PHAM SAU KHI SAP XEP TANG DAN ---\n");
    for (int i = 0; i < n; i++) {
        printf("%5d", price[i]);
    }
    printf("\n");

    return 0;
	
}
