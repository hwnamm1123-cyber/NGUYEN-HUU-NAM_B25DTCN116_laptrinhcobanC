#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define MAX 100

void clear_input();
void hienThiMenu();
void input_arr(char *a, int *length);
void printf_arr(const char *a, int length);
void count_letters(const char *a, int length);
void count_number(const char *a, int length);
void count_character(const char *a, int length);

int main(){
	int choice, choice2 = 0;
	char a[MAX];
	int length = 0; 
	
	do{
		hienThiMenu();
		do{
			printf ("Moi ban nhap vao lua chon: ");
			if (scanf("%d", &choice) != 1 || choice < 1 || choice > 6){
				printf ("Loi nhap lieu, vui long nhap lai !!!\n");
				clear_input();
				continue;
			}
			clear_input();
			break;
		} while (1);
		
		switch(choice){
			case 1:
				input_arr(a, &length);
				break;
			case 2:
				printf_arr(a, length);
				break;
			case 3:
				count_letters(a, length);
				break;
			case 4:
				count_number(a, length);
				break;
			case 5:
				count_character(a, length);
				break;
			case 6:
				do{
					printf ("Ban co xac nhat thoat chuong trinh (1 - Co || 0 - Khong)?\n");
					printf ("Nhap vao lua chon cua ban (1 - 0): ");
					if (scanf("%d", &choice2) != 1 || choice2 > 1 || choice2 < 0){
						printf ("Vui long nhap 1 hoac 0 !!!\n");
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
					printf ("Da huy thao tac thoat !!!\n");
					break;
				}
				break;
				
			default:
				break;
		}
	} while (1);
	
	return 0;
}

void clear_input(){
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

void hienThiMenu(){
	printf ("\n+--------------------MENU--------------------+\n");
	printf ("|1. Nhap vao chuoi                           |\n");
	printf ("|2. In ra chuoi                              |\n");
	printf ("|3. Dem so luong chu cai trong chuoi         |\n");
	printf ("|4. Dem so luong chu so trong chuoi          |\n");
	printf ("|5. Dem so luong ky tu dac biet trong chuoi  |\n");
	printf ("|6. Thoat                                    |\n");
	printf ("+--------------------------------------------+\n");
}

void input_arr(char *a, int *length){
	bool input_valid = false;
	do{
		printf ("Moi ban nhap vao chuoi bat ky tu ban phim: ");
		if (fgets(a, MAX, stdin) == NULL){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			continue;
		}
		int len = strlen(a);
		if (len > 0 && a[len - 1] == '\n'){
			a[len - 1] = '\0';
			len--;
		}
		if (len > 0){
			input_valid = true;
		} else {
			printf ("Vui long khong de chuoi trong !!!\n");
		}
	*length = len;
	} while (!input_valid);
}

void printf_arr(const char *a, int length){
	printf("Chuoi cua ban la: %s", a);
}

void count_letters(const char *a, int length){
	int count = 0;
	for(int i = 0; i < length; i++){
		char c = a[i];
		if (isalpha(c)){
			count++;
		}
	}
	printf ("So luong chu cai trong chuoi la: %d", count);
}

void count_number(const char *a, int length){
	int count = 0;
	for(int i = 0; i < length; i++){
		char c = a[i];
		if (isdigit(c) != 0){
			count++;
		}
	}
	printf ("So luong chu so trong chuoi la: %d", count);
}

void count_character(const char *a, int length){
	int count = 0;
	for(int i = 0; i < length; i++){
		char c = a[i];
		if (!isalnum(c) && !isspace(c)){
			count++;
		}
	}
	printf ("So luong ky tu dac biet trong chuoi la: %d", count);
}

