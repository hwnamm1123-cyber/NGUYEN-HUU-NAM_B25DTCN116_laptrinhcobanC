#include <stdio.h>
int clearInputBetter() {
	int c;
	while((c = getchar()) != '\n' && c != EOF);
	return 0;
}
int main() {
	int n, m; // n la row (hang) m la col (cot)
	//moi nguoi dung nhap vao du lieu cua mang
	printf ("---NHAP VAO DU LIEU CUA MANG---\n");
	do {
		printf ("Moi ban nhap vao so hang cua mang: ");
		if (scanf("%d", &n) != 1 || n <= 0) {
			printf ("Loi nhap lieu");
			clearInputBetter();
			continue;
		}
		clearInputBetter();
		break;
	} while (n <= 0);

	do {
		printf ("Moi ban nhap vao so cot cua mang: ");
		if (scanf("%d", &m) != 1 || m <= 0) {
			printf ("Loi nhap lieu");
			clearInputBetter();
			continue;
		}
		clearInputBetter();
		break;
	} while (m <= 0);

	//moi nguoi dung nhap vao gia tri cua mang
	printf ("---NHAP VAO GIA TRI CUA MANG---\n");
	int a[n][m]; //khai bao de gan gia tri
	//su dung vong lap for tromg for de duyet nhap vao tung phan tu trong mang
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			do {
				printf ("Moi ban nhap vao gia tri cua a[%d][%d]: ", i, j);
				if(scanf("%d", &a[i][j]) != 1) {
					clearInputBetter();
					continue;
				}
				clearInputBetter();
				break;
			} while (1);
		}
	}

	//in cac mang ra man hinh va
	printf ("---CAC GIA TRI DA NHAP TRONG MANG---\n");
	//su dung vong lap for trong for de in ra tung phan tu cua mang
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf ("%d", a[i][j]); //printf k su dung &
		}
		printf ("\n");
	}

	printf ("---TONG CUA CAC GIA TRI TREN DUONG BIEN---\n");
	// duyet qua cac phan tu nam tren duonng bien va tinh tong
	int Sum = 0;
	//dung for de duyet qua cac phan tu trong man
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if(i == 0 || i == n - 1 || j == 0 || j == n - 1) {
				Sum += a[i][j];
			}
		}
	}

	printf ("Tong gia tri cua mang tren duong bien la: %d", Sum);


	return 0;
}

