#include <stdio.h>

int binarySreach (int a[], int size, int x){
	int l = 0;
	int r = size -1;
	while (l <= r){
		int mid = l + (r - l) / 2;
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

//khai bao ham xoa ki tu
void clearInputBtter(){
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

int HienthiMenu(){
	printf("\n--------------------------------------------------------------");
	printf("\n-----QUAN LI MANG SO NGUYEN-----");
	printf("\n(1). Them phan tu vao vi tri bat ky.");
	printf("\n(2). Xoa phan tu o vi tri bat ky.");
	printf("\n(3). Cap nhat giai tri tai vi tri bat ky.");
	printf("\n(4). Tim kiem phan tu trong mang.");
	printf("\n(5). Hien thi mang.");
	printf("\n(6). Sap xep mang.");
	printf("\n(7). Thoat chuong trinh.");
	printf("\n--------------------------------------------------------------");
	printf("\nMoi ban nhap vao lua chon (1-7): ");
	return 0; 
}

int main(){
	int luachon, n, pos1, pos2, value;
	int a[100];
	n = sizeof(a) / sizeof(int);
	int position, value2;
	int result_index = -1; //bien luu tai vi tri tim thay (case 4)
	
	do{
		printf ("Moi ban nhap vao so luong phan tu cua mang: ");
		if(scanf("%d", &n) != 1 || n < 0){
			printf("Loi nhap lieu, vui long nhap lai: \n");
			clearInputBtter();
			continue;
		}
		clearInputBtter();
		break;
	} while(n <= 0);
	
	for (int i = 0; i < n; i++){
		printf ("Moi ban nhap vao phan tu thu %d trong mang: ", i);
		scanf ("%d", &a[i]);
	}
	printf ("---CAC PHAN TU TRONG MANG DA NHAP LA---\n");
	for (int i = 0; i < n; i++){
		printf ("a[%d] = %d\n", i, a[i]);
	}
	do{
		do{
			HienthiMenu();
			if (scanf("%d", &luachon) != 1 || luachon <= 0 || luachon > 7){
				printf("Loi nhap lieu, vui long nhap lai: \n");
				clearInputBtter();
				continue;
			}
			clearInputBtter();
			break;
		} while (1);
		
		switch (luachon) {
			case 1:
				printf ("Moi ban nhap vao gia tri can them: ");
				scanf ("%d", &value);
				do{
					printf ("Moi ban nhap vao vi tri can them: ");
					if (scanf("%d", &pos1) != 1 || pos1 < 0 || pos1 > 100){
						printf ("Loi nhap lieu, vui long nhap lai: \n");
						clearInputBtter();
						continue;
					}
					clearInputBtter();
					break;						
				} while (pos1 < 0 || pos1 > 100);
				
				for (int i = n; i > pos1; i++){
					a[i] = a[i - 1];
				}
				a[pos1] = value;
				n++;
				
				printf("Mang sau khi da chen la: ");
				for (int i = 0; i < n; i++){
					printf ("%d", a[i]);
				}
				break;
			
			case 2:
				do{
					printf ("Moi ban nhap vao vi tri can xoa: ");
					if(scanf("%d", &pos2) != 1 || pos2 < 0 || pos2 > 100){
						printf ("Loi nhap lieu, vui long nhap lai: \n");
						clearInputBtter();
						continue;
					}
					clearInputBtter();
					break;
				} while (pos2 < 0 || pos2 > n);
				
				for (int i = pos2; i < n - 1; i++){
					a[i] = a[n + 1];
				}
				n--;
				
				printf ("Mang sau khi da xoa: \n");
				for (int i = 0; i < n; i++){
					printf ("%d", a[i]);
				}
				break;
			
			case 3:
				do{
					printf ("Moi ban nhap vao vi tri can thay the: ");
					if(scanf("%d", &position) != 1 || position > 100){
						printf ("Loi nhap lieu, vui long nhap lai.");
						clearInputBtter();
						continue;
					}
					clearInputBtter();
					break;
				} while(position < 0);

				printf ("Moi ban nhap vao gia tri can cap nhat: ");
				scanf ("%d", &value2);
				a[position] = value2;

				printf ("Mang sau khi da cap nhat la: ");
				for (int i = 0; i < n; i++){
					printf ("%d", a[i]);
				}
				break;

			case 4:
				do{
					printf ("Moi ban nhap vao gia tri tri can tim kiem: ");
					if(scanf("%d", &value) != 1 || value < 0 ||value > 100){
						printf ("Loi nhap lieu, vui long nhap lai.");
						clearInputBtter();
						continue;
					}
					clearInputBtter();
					break;
				} while(1);

				bubbleSort (a, n);
				result_index = binarySreach(a, n, value);

				if (result_index == -1){
					printf ("\nKhong tim thay phan tu %d trong mang.\n", value);
				} else {
					printf ("\nTim thay gia tri %d tai vi tri a[%d].\n", value, result_index);
				}
				break;
				
			case 5:
				printf ("Mang cua ban hien tai la:");
				for (int i = 0; i < n; i++){
					printf ("%5d", a[i]);
				}
				
			case 6:
				bubbleSort (a, n);
				printf ("Mang hien tai cua ban sau khi sap xep la:");
				for (int i = 0; i < n; i++){
					printf ("%5d", a[i]);
				}
				
			case 7:
				printf ("Ban co chac chan thoat chuong trinh nay khong (1 - Co || 0 - Khong)? ");
				int confirm;
				do{
					if(scanf("%d", &confirm) != 1){
						printf("Vui long nhap 1(Co) hoac 0(Khong)!");
						clearInputBtter();
						continue;
					}
					clearInputBtter();
					break;
				} while (1);
				
				if (confirm == 1){
					printf ("Ket thuc chuong trinh !");
					return 0;
				} else {
					printf ("Huy thao tac!");
					clearInputBtter();
					break;
				}
			default:
				break;
		}
	} while (luachon != 7);
	return 0;
}
