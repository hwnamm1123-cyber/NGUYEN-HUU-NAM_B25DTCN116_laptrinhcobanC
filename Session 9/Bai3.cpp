#include <stdio.h>
void clearInputBuffer(){
	int c;
	while ((c = getchar()) != '\n' && c != EOF); 
} 

int main(){
	int n;
	printf ("---NHAP VAO KICH THUOC MANG N x N---\n");
	do{
		printf("Moi ban nhap vao kich thuoc n (n > 0): ");
		if(scanf("%d", &n) != 1 || n <= 0){
			printf("Loi nhap lieu");
			clearInputBuffer();
			n = 0; //gan gia tri n bang 0 de lap lai
			continue;
		}
		clearInputBuffer();
	} while (n <= 0);
	
	printf ("---NHAP GIA TRI CHO TUNG PHAN TU---\n");
	int a[n][n];
	for (int i = 0;  i < n; i++){
		for (int j = 0; j < n; j++){
			do{
				printf("Moi ban nhap vao gia tri phan tu a[%d][%d]: ", i, j);
					if (scanf("%d", &a[i][j]) != 1){
						printf ("Loi nhap lieu");
						clearInputBuffer();
						continue; // lap lai vong lap do while
					}
				clearInputBuffer();
				break; //thoat khoi vong lap khi thanh cong
			} while (1); 
		} 
	} 
	
	//tien hanh in ra man hinh
	
	printf("---MA TRAN HINH VUONG BAN DA NHAP---\n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			printf ("%5d", a[i][j]);
		}
		printf ("\n");
	}
	return 0;
}

