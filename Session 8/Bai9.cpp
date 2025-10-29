#include <stdio.h>
int main(){
	int hang, cot;

	// buoc dau nhap vao so hang so cot
	printf("--MOI BAN NHAP VAO SO HANG VA COT CUA MANG--\n");
	
	do{
		printf("Moi ban nhao vao so hang cua mang: ");
		if(scanf("%d", &hang) != 1 || hang < 0){
			printf ("Loi nhap lieu.");
			//thua hien xoa bo nho dem
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			continue;
		}
		// xoa not cac ki tu thua
		int c;
		while ((c = getchar()) != '\n' && c != EOF);		
	} while (hang < 0);
	
	do{
		printf("Moi ban nhao vao so cot cua mang: ");
		if(scanf("%d", &cot) != 1 || cot < 0){
			printf ("Loi nhap lieu.");
			//thua hien xoa bo nho dem
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			continue;
		}
		// xoa not cac ki tu thua
		int c;
		while ((c = getchar()) != '\n' && c != EOF);		
	} while (cot < 0); 
	
	// buoc 2 nhap vao gia tri cua mang
	printf("--MOI BAN NHAP VAO CAC GIA TRI CUA MANG--\n");
	int a[hang][cot];
	// su dung lvong lap for trong for de nhap vao cac gia tri trong hang va tiep tuc nhap vao cac gia tri cua hang tiep theo
	
	for(int i = 0; i < hang; i++){
		for(int j = 0; j < cot; j++){
			do{
				printf("Moi ban nhap vao gia tri a[%d][%d] cua mang: ", i, j);
				if (scanf("%d", &a[i][j]) != 1){
					printf("Loi nhap lieu.");
					int c;
					while((c = getchar()) != '\n' && c != EOF);
					continue;
				}
				int c;
				while((c = getchar()) != '\n' && c != EOF);
				break; //thoat khoi vong lap di-while khi thanh cong
			}while (1);
		}
	}
	
	//buoc 3 in ra man hinh cac gia tri cua mang, + in cac phan tu tren duong bien 
	printf("--CAC PHAN TU NAM TREN DUONG BIEN--\n");
	
	for(int i = 0; i < hang; i++){
		for (int j = 0; j < cot; j++){
			if (i ==0 ||              // ben tren
				i == hang - 1 ||      // ben duoi
				j == 0 ||             // ben trai
				j == cot - 1)         // ben phai
			{
			printf ("%5d" ,a[i][j]);
			} else {
				printf ("     ");
			}
		}
		printf("\n"); //xuong dong khi het mot hang 
	}
	
	return 0;
	
}
