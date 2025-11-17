#include <stdio.h>
#define MAX 100

void hienThiMenu();
void clear_input();
void input_arr(int *a, int *szie);
void printf_arr(int *a, int size);
void size_arr(int size);
void sum_arr(int *a, int size);
void print_max (int *a, int size);

int main(){
	int choice, choice2;
	int a[MAX];
	int size2 = 0;
	
	do{
		hienThiMenu();
		
		do{
			printf ("Moi ban nhap vao lua chon: ");
			if(scanf("%d", &choice) != 1 || choice < 1 || choice > 6){
				printf("Loi nhap lieu, vui long nhap lai !!!\n");
				clear_input();
				continue;
			}
			clear_input();
			break;
		} while (1);
		
		switch (choice){
			case 1:
				input_arr(a, &size2);
				break; 
			case 2:
				printf_arr(a, size2);
				break;
			case 3:
				size_arr(size2);
				break;
			case 4:
				sum_arr(a, size2);
				break;
			case 5:
				print_max (a, size2);
				break;
			case 6:
				do{
					printf ("Ban co xac nhan thoat chuong trinh?\n");
					printf ("Vui long nhap lua chon (1 - Co || 0 - Khong): ");
					if (scanf("%d", &choice2) != 1 || choice2 < 0 || choice2 > 1){
						printf ("Loi nhap lieu, vui long nhap 1 hoac 0 !!!\n");
						clear_input();
						continue;
					}
					clear_input();
					break;
				} while (1);
				
				if (choice2 == 1){
					printf ("Ket thuc chuong trinh !!!\n");
					return 0;
				} else {
					printf ("Da huy thao tac thoat !!!!\n");
					break;
				}
				break;
			default:
				break;
		}
	} while (1);
}

void clear_input(){
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

void hienThiMenu(){
    printf("\n+----------------------------------+\n");
    printf("|         MENU CHUONG TRINH        |\n");
    printf("+----------------------------------+\n");
    printf("| 1. Nhap mang (Input)             |\n");
    printf("| 2. Hien thi mang (Display)       |\n");
    printf("| 3. Hien thi do dai mang (Size)   |\n");
    printf("| 4. Tinh tong phan tu (Sum)       |\n");
    printf("| 5. Tim gia tri lon nhat (Max)    |\n");
    printf("| 6. Thoat chuong trinh (Exit)     |\n");
    printf("+----------------------------------+\n");
}

void input_arr(int *a, int *size2){
	int size;
	*size2 = 0;
	do{
		printf ("Moi ban nhap vao so luong phan tu: ");
		if(scanf("%d", &size) != 1 || size < 0 || size > MAX){
			printf("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
			continue;
			}
		clear_input();
		break;
	} while (1);
	
	*size2 = size;
	
	for (int i = 0; i < size; i++){
		do{
			printf ("Moi ban nhap vao gia tri cua pahn tu a[%d]: ", i);
			if(scanf("%d", (a + i)) != 1){
				printf("Loi nhap lieu, vui long nhap lai !!!\n");
				clear_input();
				continue;
				}
			clear_input();
			break;
		} while (1);
	}
}

void printf_arr(int *a, int size2){
	printf ("{ ");
	for (int i = 0; i < size2; i++){
		printf ("%2d", a[i]);
		if (i < size2 - 1){
			printf (", ");
		}
	}
	printf (" }");
}

void size_arr(int size2){
	if (size2 == 0) {
        printf("Mang rong, vui long nhap mang truoc (Chon 1).\n");
        return;
    }
	printf ("Do dai mang hien tai cua ban la: %d", size2);
}

void sum_arr(int *a, int size2){
	int sum;
	if (size2 == 0) {
        printf("Mang rong, khong the tinh tong.\n");
        return;
    }
	for (int i = 0; i < size2; i++){
		sum += a[i];
	}
	printf ("Tong cac phan tu trong mang cua ban la: %d", sum);
}

void print_max(int *a, int size2){
	int max;
	if (size2 == 0) {
        printf("Mang rong, khong the tim gia tri lon nhat.\n");
        return;
    }
	max = a[0];
	for (int i = 1; i < size2; i++){
		if (max < a[i]){
			max = a[i];
		}
	}
	printf ("Gia tri lon nhat cua mang la: %d", max);
}
