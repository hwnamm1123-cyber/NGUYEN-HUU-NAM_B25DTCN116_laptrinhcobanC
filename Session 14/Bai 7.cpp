#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void inputArr(int a[][MAX_COLS], int rows, int cols);
void printfArr(int a[][MAX_COLS], int rows, int cols);

void clearInput();

int main(){
	int rows, cols;
	int a[MAX_ROWS][MAX_COLS];
	
	printf("---CHUONG TRINH MA TRAN HAI CHIEU---\n");
	
	do{
		printf ("Moi ban nhap vao so hang cho mang: ");
		if(scanf("%d", &rows) != 1 || rows > 100 || rows < 0){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clearInput();
			continue;
		}
		clearInput();
		break;
	} while (1);
	
	do{
		printf ("Moi ban nhap vao so cot cho mang: ");
		if(scanf("%d", &cols) != 1 || cols > 100 || cols < 0){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clearInput();
			continue;
		}
		clearInput();
		break;
	} while (1);
	
	inputArr(a, rows, cols);
	printf("---MA TRAN BAN DA TAO LA---\n");
	printfArr(a, rows, cols);
	
	return 0;
}

void clearInput(){
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

void inputArr(int a[][MAX_COLS], int rows, int cols){
	for(int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			do{
				printf ("Nhap gia tri cho phan tu a[%d][%d]: ", i, j);
				if (scanf("%d", &a[i][j]) != 1){
					printf ("Loi nahp lieu, vui long nhao lai !!!");
					clearInput();
					continue;
				}
				clearInput();
				break;
			} while (1);
		}
	} 
}

void printfArr(int a[][MAX_COLS], int rows, int cols){
	for (int i = 0; i < rows; i++){
		printf ("|");
		for (int j = 0; j < cols; j++){
			printf ("%5d", a[i][j]);
		}
		printf ("    |\n");
	}
}



