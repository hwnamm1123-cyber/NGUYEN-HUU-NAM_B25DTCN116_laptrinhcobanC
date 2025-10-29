#include <stdio.h>
int main(){
	int hang, cot;

	// dau tien moi nhguoi dung nhap vao so hang va cot cua mang
	printf("--MOI BAN NHAP VAO SO HANG VA COT CUA MANG 2 CHIEU--");
	
	do{ // nhap so hang
		printf ("\nMoi ban nhap vao so hang cua mang hai chieu: ");
		if(scanf("%d", &hang) != 1 || hang <= 0){
			printf ("Loi nhap lieu.");
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			continue;
		}
		int c;
		while ((c = getchar()) != '\n' && c != EOF);
	} while (hang <= 0);
	
	do{ // nhap so cot
		printf ("\nMoi ban nhap vao so cot cua mang hai chieu: ");
		if(scanf("%d", &cot) != 1 || cot <= 0){
			printf ("Loi nhap lieu.");
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			continue;
		}
		int c;
		while ((c = getchar()) != '\n' && c != EOF);
	} while (cot <= 0);
	
	int a[hang][cot];
	// Tiep theo nhap vao so gia tri cua tung mang
	printf("\n--NHAP GIA TRI CHO TUNG GIA TRI--");
	// su dung vong lap for trong for: khi  m (so hang) ++ thi nguoi dung se nhap vao cac gia tri n (so cot) va lan luot 
	
	for(int i = 0; i < hang; i++){
		for(int j = 0; j < cot; j++){
			do{
				printf("\nMoi ban nhap vao gia tri cua phan tu a[%d][%d] trong mang: ", i, j);
				if (scanf("%d", &a[i][j]) != 1){
					printf ("Loi nhap lieu");
					int c;
					while ((c = getchar()) != '\n' && c != EOF);
					continue;
				} 
				int c;
				while ((c = getchar()) != '\n' && c != EOF);
				break; // thoat khoi vong lap khi thanh cong 
			} while (1); 
		}  
	}  
	
	//sau khi nhap xong thi in ra man hinh
	printf("\n--MANG BAN DA NHAP LA--\n");
	// su dung vong lap for de in lien tuc ra man hinh cac gia tri
	
	for(int i = 0; i < hang; i++){ // vong lap dau tien de duyet qua cac hang
		for(int j = 0; j < cot; j++){  //vong lap thu 2 de duyet qua cac cot
			printf ("%5d", a[i][j]); //su dung %5d de moi phan tu mo rong 5 ki tu
		}
		printf("\n"); // doan nay them \n de sau khi het 1 hang se xuong dong in hang tiep theo
	}
	return 0;
	
	
}
