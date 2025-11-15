#include <stdio.h>
#define MAX 100

void hienThiMenu();
void add_value (int *a, int *size);
void delete_char (int *a, int *size);
void update_value (int *a, int *size);
void printf_arr(int *a, int *size);
void clear_input();


int main(){
	int number[] = {15, 25, 35, 36, 45, 55, 65};
	int size = sizeof(number) / sizeof (number[0]);
	int choice, choice2;
	
	printf ("--MANG BAN DAU CUA BAN LA--\n");
	printf_arr(number, &size);
	
	do{
		hienThiMenu();
		do{
			printf ("Moi ban nhap vao lua chon cua ban: ");
			if (scanf("%d", &choice) != 1 || choice < 1 || choice > 5){
				printf ("Loi nhap lieu, vui long nhap (1-5) !!!\n");
				int c;
				while ((c = getchar()) != '\n' && c != EOF);
				continue;
			}
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			break;
		} while (1);
			
		switch (choice){
			case 1:
				add_value(number, &size);
				printf ("Mang sau khi them phan tu la: ");
				printf_arr(number, &size);
				break;
			case 2:
				printf ("Mang cua ban truoc khi xoa phan tu la: ");
				printf_arr(number, &size);
				delete_char(number, &size);
				printf ("Mang cua ban sau khi xoa pahn tu la: ");
				printf_arr(number, &size);
				break;
			case 3:
				update_value(number, &size);
				printf ("Mang cua ban sau khi cap nhat pahn tu la: ");
				printf_arr(number, &size);
				break;
			case 4:
				printf ("Mang cua ban la: ");
				printf_arr(number, &size);
				break;
			case 5:
				do{
					printf ("Ban co xac nhan thoat chuong trinh khong (1 - Co || 0 - Khong)?\n");
					printf ("Nhap lua chon cua ban: ");
					if(scanf("%d", &choice2) != 1 || choice2 > 1 || choice2 < 0){
						printf ("Loi nhap lieu vui long nhap 1 hoac 0 !!!\n");
						clear_input();
						continue;
					}
					clear_input();
					break;
				} while (1);
				
				if(choice2 == 1){
					printf ("Ket thuc chuong trinh !!!");
					return 0;
				} else {
					printf ("Da hoan tac thao tac huy !!!\n");
				}
			default:
				break;	
		} 
	} while (1);
	
	return 0;
}

void hienThiMenu(){
	int choice;
	printf ("\n+------MENU QUAN LY DANH SACH SO NGUYEN------+\n");
	printf ("|1. Them phan tu vao vi tri bat ky           |\n");
	printf ("|2. Xoa phan tu tai vi tri bat ky            |\n");
	printf ("|3. Cap nhat gia tri tai vi tri bat ky       |\n");
	printf ("|4. Hien thi mang                            |\n");
	printf ("|5. Thoat chuong trinh                       |\n");
	printf ("+--------------------------------------------+\n");
}

void add_value (int *a, int *size){
	int value, index;
	do{
		printf ("Moi ban nhap vao gia tri muon them: ");
		if(scanf("%d", &value) != 1){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
			continue;
		}
		clear_input();
		break;
	} while (1);
	
	do{
		printf ("Moi ban nhap vao vi tri muon them: ");
		if(scanf("%d", &index) != 1 || index < 0 || index > *size){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
			continue;
		}
		clear_input();
		break;
	} while (1);
	
	if (*size >= MAX){
		printf ("Mang da day, khong the them phan tu");
		return;
	}
	(*size)++;
	for (int i = *size - 1; i > index; i--){
		a[i] = a[i - 1];
	}
	a[index] = value;
}

void delete_char (int *a, int *size){
	int index2;
	do{
		printf("Moi ban nhap vao vi tri muon xoa: ");
		if (scanf("%d", &index2) != 1 || index2 < 0 || index2 > *size){
			printf ("Loi nhap lieu vui long nhap lai !!!\n");
			clear_input();
			continue;
		} 
		clear_input();
		break;
	} while(1);
	
	for (int i = index2; i < *size; i++){
		a[i] = a[i + 1];
	}
	(*size)--;
}

void update_value (int *a, int *size){
	int index, value;
	do{
		printf ("Moi ban nhap vao gia tri muon cap nhat: ");
		if(scanf("%d", &value) != 1){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
			continue;
		}
		clear_input();
		break;
	} while (1);
	
	do{
		printf ("Moi ban nhap vao vi tri muon cap nhat: ");
		if(scanf("%d", &index) != 1 || index < 0 || index > *size){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
			continue;
		}
		clear_input();
		break;
	} while (1);
	
	for (int i = 0; i < *size; i++){
		if (i == index){
			a[i] = value;
		}
	}
}

void clear_input(){
	int c;
	while((c = getchar()) != '\n' && c != EOF);
}

void printf_arr(int *a, int *size){
	printf ("{ ");
	for(int i = 0; i < *size; i++){
		printf ("%2d", a[i]);
		if (i < *size - 1){
			printf (", ");
		}
	}
	printf (" }\n");
}
