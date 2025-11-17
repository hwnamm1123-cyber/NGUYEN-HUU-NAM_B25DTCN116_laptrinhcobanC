#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX 100

void clear_input();
void printf_char(const char *a, int length);
void hienThiMenu();
void input_char(char *a, int *length);
void printf_char_reverse(char *a, int length);
void count_words(const char *a, int length);
void input_and_comparison(char *a2, const char *a, int *length2, int length);
void toupper_char(char *a, int length);
void update_char(char *a, char *a3, int *length3, int length);

int main(){
	char a[MAX], a2[MAX], a3[MAX]; 
	int length = 0, length2 = 0, length3 = 0, choice, choice2 = 0;
	
	do{
		hienThiMenu();
		do{
			printf ("Moi ban nhap vao lua chon: ");
			if (scanf("%d", &choice) != 1 || choice < 1 || choice > 7){
				printf ("Loi nhap lieu, vui long nhap lai !!!\n");
				clear_input();
				continue;
			}
			clear_input();
			break;
		} while (1);
		
		switch(choice){
			case 1:
				input_char(a, &length);
				break;
			case 2:
				printf_char_reverse(a, length);
				printf_char(a, length);
				break;
			case 3:
				count_words(a, length);
				break;
			case 4:
				input_and_comparison(a2, a, &length2, length);
				break;
			case 5:
				toupper_char(a, length);
				printf_char(a, length);
				break;
			case 6:
				update_char(a, a3, &length3, length);
				printf_char(a, length + length3);
				break;
			case 7:
				do{
					printf ("Ban co xac nhan thoat chuong trinh khong(1 - Co || 0 - khong)?\n");
					printf ("Nhap vao lua chon cua ban: ");
					if (scanf("%d", &choice2) != 1 ||choice2 < 0 || choice2 > 1){
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
					printf ("Da hoan tac thao tac huy !!!\n");
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
	printf ("|2. In ra chuoi dao nguoc                    |\n");
	printf ("|3. Dem so luong tu trong chuoi              |\n");
	printf ("|4. Nhap chuoi moi va so sanh                |\n");
	printf ("|5. In hoa tat ca chu cai trong chuoi        |\n");
	printf ("|6. Nhap va noi chuoi                        |\n");
	printf ("|7. Thoat                                    |\n"); 
	printf ("+--------------------------------------------+\n");
}

void input_char(char *a, int *length){
	bool input_valid = false;
	do{
		printf ("Moi ban nhap chuoi bat ky tu ban phim: ");
		if(fgets(a, MAX, stdin) == NULL){
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
			printf ("Vui long khong de mang trong !!!\n");
		}
		*length = len;
	} while (!input_valid);
}

void printf_char(const char *a, int length){
    printf("Chuoi hien tai: \"%s\"\n", a);
}

void printf_char_reverse(char *a, int length){
	char temp;
	for (int i = 0; i < length / 2; i++){
		int j = length - i - 1;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

void count_words(const char *a, int length){ 
	int count = 0;
    bool in_word = false;    
	for (int i = 0; i < length; i++){
		char c = a[i];
        
        if (isspace(c)) {
            in_word = false;
        } else if (!in_word) {
            in_word = true;
            count++;
        }
	}
	printf ("So luong tu trong chuoi la: %d\n", count);
}

void input_and_comparison(char *a2, const char *a, int *length2, int length){
	bool input_valid = false;
	int len2 = 0;
	do{
		printf ("Moi ban nhap chuoi bat ky tu ban phim: ");
		if(fgets(a2, MAX, stdin) == NULL){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			continue;
		}
		len2 = strlen(a2);
		if (len2 > 0 && a2[len2 - 1] == '\n'){
			a2[len2 - 1] = '\0';
			len2--;
		}
		if (len2 > 0){
			input_valid = true;
		} else {
			printf ("Vui long khong de mang trong !!!\n");
		}
		*length2 = len2;
	} while (!input_valid);
	
	printf("Chuoi goc dai: %d\n", length);
    printf("Chuoi moi dai: %d\n", len2);
	
	if(len2 == length){
		printf ("Chuoi ban nhap dai bang chuoi ban dau !!!\n");
	} else if (len2 < length){
		printf ("Chuoi ban nhap ngan hon chuoi ban dau !!!\n");
	} else {
		printf ("Chuoi ban nhap dai hon chuoi ban dau !!!\n");
	}
}

void toupper_char(char *a, int length){
	for (int i = 0; i < length; i++){
		a[i] = toupper(a[i]);
	}
}

void update_char(char *a, char *a3, int *length3, int length){
	bool input_valid = false;
	int len3 = 0;
	do{
		printf ("Moi ban nhap chuoi bat ky tu ban phim: ");
		if(fgets(a3, MAX, stdin) == NULL){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			continue;
		}
		len3 = strlen(a3);
		if (len3 > 0 && a3[len3 - 1] == '\n'){
			a3[len3 - 1] = '\0';
			len3--;
		}
		if (len3 > 0){
			input_valid = true;
		} else {
			printf ("Vui long khong de mang trong !!!\n");
		}
		*length3 = len3;
	} while (!input_valid);
	
	if (length + len3 >= MAX){
        printf("Chuoi qua dai sau khi noi, huy thao tac noi.");
        *length3 = 0; 
        return;
    }
	
	strcat(a, a3);
	printf("Tong do dai moi: %d\n", length + *length3);
}


