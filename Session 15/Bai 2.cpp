#include <stdio.h>

int Sum_Number(int a);
void clearInput();

int main(){
	int number;
	int Sum_result;

	do{
		printf("Moi ban nhap vao mot so nguyen duong: ");
		if (scanf("%d", &number) != 1 || number < 0) {
			printf("Loi nhap lieu hoac so khong hop le.\n");
			clearInput();
			continue;
		}
		clearInput();
		break;
	} while (1);
    
	Sum_result = Sum_Number(number);
	printf("Tong cac chu so trong so %d la: %d\n", number, Sum_result);
	return 0; 
} 

int Sum_Number(int a){
	int Sum = 0;
	do{
		int x = a % 10;
		int a = a / 10;
		Sum += x;
	} while (a > 0);
	return Sum;
}
void clearInput(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

