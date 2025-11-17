#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX 100

void clear_input();
void hienThiMenu();
void hienThiMenuSoSanh();
void input_arr(int *a, int *size);
void printf_EvenNumber(int *a, int size);
void printf_prime_number(int *a, int size);
void reverse_arr(int *a, int size); 
void arrange_arr(int *a, int size);
void look_value (int *a, int size);

int main(){
	int a[MAX];
	int size = 0;
	int choice, choice3;
	
	do{
		hienThiMenu();
		do{
			printf ("Moi ban nhap vao lua chon: ");
			if(scanf("%d", &choice) != 1 || choice < 1 || choice > 7){
				printf ("Loi nhap lieu, vui long nhap (1 -7) !!!\n");
				clear_input();
				continue;
			}
			clear_input();
			break;
		} while (1);
		
		switch(choice){
			case 1:
				input_arr(a, &size);
				break;
			case 2:
				printf_EvenNumber(a, size);
				break;
			case 3:
				printf_prime_number(a, size);
				break;
			case 4:
				reverse_arr(a, size);
				break;
			case 5:
				hienThiMenuSoSanh();
				arrange_arr(a, size);
				break;
			case 6:
				look_value (a, size);
				break;
			case 7:
				do{
					printf ("Ban co xac nhan thoat chuong trinh (1 - Co || 0 - Khong)?\n");
					printf ("Vui long nhap vao lua chon cua ban: ");
					if (scanf("%d", &choice3) != 1 || choice3 > 1 || choice3 < 0){
						printf ("Loi nhap lieu, vui long nhap 1 hoac 0 !!!\n");
						clear_input();
						continue;
					} 
					clear_input();
					break;
				} while (1);
				
				if (choice3 == 1){
					printf ("Ket thuc chuong trinh !!!\n");
					return 0;
				} else {
					printf ("Da hoan tac thao tac huy !!!\n");
					break;
				}
			default:
				break;
		}
	} while (1);
	
	return 0;
}

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    if (n == 2) {
        return true; 
    }
    if (n % 2 == 0) {
        return false;
    }

    for (int i = 3; i * i <= n; i = i + 2) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}

void clear_input(){
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

void hienThiMenu(){
	printf ("\n+-------------------------MENU-------------------------+\n");
	printf ("|1. Nhap vao so phan tu va tung phan tu                |\n");
	printf ("|2. In ra cac phan tu la so chan                       |\n");
	printf ("|3. In ra cac phan tu la so nguyen to                  |\n");
	printf ("|4. Dao nguoc mang                                     |\n");
	printf ("|5. Sap xep mang                                       |\n");
	printf ("|6. Nhap vao mot phan tu va tim kiem trong mang        |\n");
	printf ("|7. Thoat                                              |\n"); 
	printf ("+------------------------------------------------------+\n");
}

void hienThiMenuSoSanh(){
	printf ("\n+-------------------------MENU-------------------------+\n");
	printf ("| a. Tang dan                                          |\n");
	printf ("| b. Giam dan                                          |\n");
	printf ("+------------------------------------------------------+\n");	
}

void input_arr(int *a, int *size){
	int size2;
	do{
		printf ("Moi ban nhap vao so phan tu cho mang: ");
		if(scanf("%d", &size2) != 1 || size2 < 0 || size2 > MAX){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
			continue;
		}
		clear_input();
		break;
	} while (1);
	*size = size2;
	
	for (int i = 0; i < *size; i++){
		do{
			printf ("Moi ban nhap vao gia tri cua phan tu a[%d]: ", i);
			if(scanf("%d", &a[i]) != 1){
				printf ("Loi nhap lieu, vui long nhap lai !!!\n");
				clear_input();
				continue;
			}
			clear_input();
			break;
		} while (1);
	}
}

void printf_EvenNumber(int *a, int size){
	printf ("Cac phan tu la so chan trong mang la: ");
	printf ("{ ");
	bool first_even = true;
	for (int i = 0; i < size; i++){
        if (a[i] % 2 == 0){
            if (!first_even) {
                printf(", ");
            }
            printf ("%2d", a[i]);
            first_even = false;
        }
    }
    printf(" }\n");
}

void printf_prime_number(int *a, int size){
	if (size <= 0) {
        printf("Mang rong.\n");
        return;
    }
    printf("Cac so nguyen to trong mang la: { ");
    bool first_prime = true; 
    for (int i = 0; i < size; i++) {
        if (is_prime(a[i])) { 
            if (!first_prime){
                printf(", ");
            }
            printf("%d", a[i]);
            first_prime = false;
        }
    }
    printf(" }");
    printf("\n");
}

void reverse_arr(int *a, int size){
	int temp = 0;
	for (int i = 0; i < size / 2; i++){
		int j = size - 1 - i;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
	}
	printf ("Mang cua ban sau khi dao nguoc la: { ");
	for (int i = 0; i < size; i++){
		printf ("%2d", a[i]);
		if (i < size - 1){
			printf (", ");
		}
	}
	printf (" }\n");
}

void arrange_arr(int *a, int size){
	char choice2;
	int temp1 = 0, temp2 = 0;
	do{
		printf ("Moi ban nhap vao lua chon (a hoac b): ");
		if (scanf("%c", &choice2) != 1 || (choice2 != 'a' && choice2 != 'b')){
			printf ("Loi nhap lieu, vui long nhap a hoac b !!!\n");
			clear_input();
			continue;
		}
		clear_input();
		break;
	} while (1);
	
	switch(choice2){
		case 'a':
		    for (int i = 0; i < size - 1; i++) {
		        for (int j = i + 1; j < size; j++) {
		            if (a[i] > a[j]) { 
		                temp1 = a[i];
		                a[i] = a[j];
		                a[j] = temp1;
		            }
		        }
		    }
		    printf ("Mang cua ban sau khi sap xep tang dan la: { ");
			for (int i = 0; i < size; i++){
				printf ("%2d", a[i]);
				if (i < size - 1){
					printf (", ");
				}
			}
			printf (" }\n");
			
			break;
		case 'b':
		    for (int i = 0; i < size - 1; i++) {
		        for (int j = i + 1; j < size; j++) {
		            if (a[i] < a[j]) { 
		                temp2 = a[i];
		                a[i] = a[j];
		                a[j] = temp2;
		            }
		        }
		    }
			printf ("Mang cua ban sau khi sap xep giam dan la: { ");
			for (int i = 0; i < size; i++){
				printf ("%2d", a[i]);
				if (i < size - 1){
					printf (", ");
				}
			}
			printf (" }\n");
			
			break;
		default:
			break;
	}
}

void look_value (int *a, int size){
	int value, count = 0;
	do{
		printf ("Moi ban nhap vao gia tri muon tim kiem: ");
		if(scanf("%d", &value) != 1){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clear_input();
			continue;
		}
		clear_input();
		break;
	} while (1);
	
	for (int i = 0; i < size; i++){
		if (a[i] == value){
			printf ("Tim thay %d tai vi tri %d !!!\n", value, i);
			count++;
			break;
		}
	}
	if (count == 0){
		printf ("Khong tim thay %d trong mang !!!\n", value);
	}
}
