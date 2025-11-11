#include <stdio.h> 
#include <stdlib.h>

void effect_number(int a, int b);
void integrate_number(int a, int b);
void clearInput();
int HienthiMenu(); 

int main(){
	int number1, number2, choice;

	printf ("Moi ban nhap vao gia tri cho so thu nhat: ");
	scanf ("%d", &number1);
	clearInput();
	
	printf ("Moi ban nhap vao gia tri cho so thu hai: ");
	scanf ("%d", &number2);
	clearInput();
	
	do{
		HienthiMenu();
		do{
			printf ("Moi ban nhap vao lua chon (1 - 2): ");
			if(scanf("%d", &choice) != 1 || choice < 1 || choice > 2){
				printf ("Loi nhap lieu, vui long nhap lai !!!\n");
				clearInput();
				continue;
			} 
			clearInput();
			break;
		} while (1);
		
		switch (choice){
			case 1:
				effect_number(number1, number2);
				break;
			case 2:
				integrate_number(number1, number2);
				break;
			default:
				break;
		}
	} while (1);
	return 0;
} 

int HienthiMenu(){
	printf ("\n---------MENU---------\n");
	printf ("1. Tinh hieu cua hai so, su chenh lech cua hai so.\n");
	printf ("2. Tinh tich cua hai so.\n");
	return 0;
}

void effect_number(int a, int b){
	int effect = abs(a - b);
    printf("Ket qua chenh lech cua hai so (Hieu) la: %d\n", effect);
}

void integrate_number(int a, int b){
	long long integrate = (long long)a * b;
	printf ("Tich cua hai so la: %lld", integrate);
}

void clearInput(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
