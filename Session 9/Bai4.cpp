#include <stdio.h> 
int clearInputBuffer(){
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}
int main(){
	//printf moi nguoi dung nhap vao gia tri n, m (hang va cot) cua mang
	int n, m;
	printf ("--MOI BAN NHAP VAO DU LIEU CUA MANG--\n"); 
	do{
		printf ("Moi ban nhap vao so hang cua mang: ");
		if(scanf("%d", &n) != 1 || n <= 0){
			printf ("Loi nhap lieu");
			clearInputBuffer();
			continue;
		}
		clearInputBuffer();
	} while (n <= 0);
	
	do{
		printf ("Moi ban nhap vao so cot cua mang: ");
		if(scanf("%d", &m) != 1 || m <= 0){
			printf ("Loi nhap lieu");
			clearInputBuffer();
			continue;
		}
		clearInputBuffer();
	} while (m <= 0);
	
	//moi nguoi dung nhap vao cac gia tri cua mang
	int a[n][m];
	printf ("--NHAP VAO CAC GIA TRI CUA MANG--\n") ;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			do{
				printf ("Moi ban nhap vao gia tri cua a[%d][%d]: ", i, j);
				if(scanf("%d", &a[i][j]) != 1){
					printf ("Loi nhap lieu");
					clearInputBuffer();
					continue; // lap lai vong lap khi nguoi dung nhap sai
				}
				clearInputBuffer();
				break; //thoat khoi vong lap do while khi thanh cong
			} while (1);
		} 
	}
	
	//in ra phan tu lon nhat 
	//su dung vong lap for de duyet tung phan tu cua mang
	int max = a[0][0];
	int max_row = 0;
	int max_col = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (a[i][j] > max){
				max = a[i][j];
				max_row = i;
				max_col = j;
			}
		}
	}
	printf ("--IN RA PHAN TU LON NHAT CUA MANG--");
	printf ("Phan tu lon nhat cua mang la a[%d][%d]: %d", max_row, max_col, max);
	return 0; 
}
