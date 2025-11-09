#include <stdio.h>
#include <stdbool.h>
#define MAX_ROWS 100
#define MAX_COLS 100

void hienthiMeunu();
bool check_primeNumber(int n);
void inputArr(int a[][MAX_COLS], int rows, int cols);
void printArr(int a[][MAX_COLS], int rows, int cols);
void printArrGoc(int a[][MAX_COLS], int rows, int cols);
void printArrBien(int a[][MAX_COLS], int rows, int cols);
void printArrDuongCheo(int a[][MAX_COLS], int rows, int cols);
void printPrimeNumber(int a[][MAX_COLS], int rows, int cols);
void clearInput();

int main(){
	int rows = 0, cols = 0;
	int choice;
	int a[MAX_ROWS][MAX_COLS];
	
	printf ("---KHOI TAO MANG HAI CHIEU---\n");
	do{
		printf ("Moi ban nhap vao so hang cua mang: ");
		if(scanf("%d", &rows) != 1 || rows < 0){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clearInput();
			continue;
		}
		clearInput();
		break;
	} while (1);
	
	do{
		printf ("Moi ban nhap vao so cot cua mang: ");
		if(scanf("%d", &cols) != 1 || cols < 0){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			clearInput();
			continue;
		}
		clearInput();
		break;
	} while (1);
	
	do{
		hienthiMeunu();
		do{
			printf ("Moi ban nhap vao lua chon cua ban (1-7): ");
			if(scanf("%d", &choice) != 1|| choice < 0 || choice > 7){
				printf ("Loi nhap lieu vui long nhap (1 - 7) !!!\n");
				clearInput();
				continue;
			}
			clearInput();
			break;
		} while (1);
		
		if(choice >= 3 && choice <= 6 && (rows == 0 || cols == 0)){
			printf ("Ma tran chua duoc nhap kich thuoc xac dinh !!!\n");
			continue;
		}
		// co the thay dieu kien o do thanh <= 0 de bo lech if nay
		
		switch (choice){
			case 1:
				inputArr(a, rows, cols);
				break;
			case 2:
				printArr(a, rows, cols);
				break;
			case 3:
				printArrGoc(a, rows, cols);
				break;
			case 4:
				printArrBien(a, rows, cols);
				break;
			case 5:
				printArrDuongCheo(a, rows, cols);
				break;
			case 6:
				printPrimeNumber(a, rows, cols);
				break;
			case 7:
				printf ("Thoat chuong trinh !!!\n");
				return 0;
				break;
			default:
				break;
		}
	} while (1);
	return 0;;
}

void clearInput() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void hienthiMeunu() {
    printf("\n--- MENU CHUC NANG ---\n");
    printf("1. Nhap gia tri cac phan tu cua mang\n");
    printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
    printf("3. In ra cac phan tu o goc theo ma tran\n");
    printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
    printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
    printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
    printf("7. Thoat\n");
}

bool check_primeNumber(int n){
	if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

void inputArr(int a[][MAX_COLS], int rows, int cols){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            do {
                printf("Nhap phan tu A[%d][%d]: ", i, j);
                if (scanf("%d", &a[i][j]) != 1) {
                    printf("Loi nhap lieu, vui long nhap lai !!!\n");
                    clearInput();
                    continue;
                }
                clearInput();
                break;
            } while (1);
        }
    }
    printf("Da nhap ma tran thanh cong.\n");
}

void printArr(int a[][MAX_COLS], int rows, int cols){
	printf("--- MA TRAN %dx%d ---\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        printf("|");
        for (int j = 0; j < cols; j++) {
            printf("%5d", a[i][j]);
        }
        printf("    |\n");
    }
}

void printArrGoc(int a[][MAX_COLS], int rows, int cols){
	printf("--- CAC PHAN TU O GOC ---\n");
    printf("Goc tren trai A[0][0]: %d\n", a[0][0]);
    
    if (cols > 1) {
        printf("Goc tren phai A[0][%d]: %d\n", cols - 1, a[0][cols - 1]);
    }

    if (rows > 1) {
        printf("Goc duoi trai A[%d][0]: %d\n", rows - 1, a[rows - 1][0]);
    }
    
    if (rows > 1 && cols > 1) {
        printf("Goc duoi phai A[%d][%d]: %d\n", rows - 1, cols - 1, a[rows - 1][cols - 1]);
    }
    
    if (rows == 1 && cols == 1) {
        printf("Ma tran chi co 1 phan tu, do la goc duy nhat.\n");
    }
}

void printArrBien(int a[][MAX_COLS], int rows, int cols){
	printf("--- CAC PHAN TU NAM TREN DUONG BIEN ---\n");
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");
}

void printArrDuongCheo(int a[][MAX_COLS], int rows, int cols){
	printf("--- CAC PHAN TU NAM TREN DUONG CHEO ---\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
	        if (i == j || i + j == cols - 1) {
                printf("%d (A[%d][%d]) ", a[i][j], i, j);
            }
        }
    }
    printf("\n");
}

void printPrimeNumber(int a[][MAX_COLS], int rows, int cols){
	printf("--- CAC PHAN TU LA SO NGUYEN TO ---\n");
    bool found = false;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (check_primeNumber(a[i][j])) {
                printf("%d (A[%d][%d]) ", a[i][j], i, j);
                found = true;
            }
        }
    }
    
    if (!found) {
        printf("Khong tim thay so nguyen to nao trong ma tran.\n");
    }
    printf("\n");
}

