#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX 100

int hienThiMenu();

int main(){
	char a[MAX];
	int length, choice;
	
	bool input_valid = false;
	
	do{
		printf ("Moi ban nhap vao chuoi bat ky tu ban phim: ");
		if (fgets(a, sizeof(a), stdin) == NULL){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			continue;
		}
		length = strlen(a);
		if (length > 0 && a[length - 1] == '\n'){
			a[length - 1] = '\0';
			length--;
		}
		if (length > 0){
			input_valid = true;
		} else {
			printf ("Vui long khong de mang trong !!!\n");
		}
	} while (!input_valid);
	
	int length2 = strlen(a);
	
	do{
		choice = hienThiMenu();
		char a2[MAX];
		strcpy(a2, a);
		
		switch (choice){
			case 1:
				for (int i = 0; i < length2; i++){
					a2[i] = toupper(a2[i]);
				}
				printf ("Chuoi cua ban sau khi in hoa la: %s", a2);
				break;
			case 2:
				for (int i = 0; i < length2; i++){
					a2[i] = tolower(a2[i]);
				}
				printf ("Chuoi cua ban sau khi in thuong la: %s", a2);
				break;
			default:
				break;	
		}
	} while (1);
	
	return 0;
}

int hienThiMenu(){
	int choice;
	printf ("\n+--------------------MENU-------------------+\n");
	printf ("|1. In ra chuoi voi toan bo chu hoa         |\n");
	printf ("|2. In ra chuoi voi toan bo chu thuong      |\n");
	printf ("+-------------------------------------------+\n");
	
	do{
		printf ("Moi ban nhap vao lua chon cua ban(1-2): ");
		if(scanf("%d", &choice) != 1 || choice < 1 || choice > 2){
			printf ("Loi nhap lieu, vui long nhap 1 hoac 2 !!!\n");
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			continue;
		}
		int c;
		while ((c = getchar()) != '\n' && c != EOF);
		break;
	} while (1);
	return choice;
}


