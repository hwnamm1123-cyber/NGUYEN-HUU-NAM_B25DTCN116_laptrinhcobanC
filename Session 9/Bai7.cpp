#include <stdio.h>
int main(){
	const int n = 4; //gia tri khong doi cho mang  
	int a[n][n] = {
		
	//0  1  2  3  4 
		{4, 4, 4, 4} , // them dau phay vao sau moi hang cua mang khai bao 
		{4, 4, 4, 4} ,
		{4, 4, 4, 4} ,
		{4, 4, 4, 4} 
	};
	printf ("---MANG DA KHI BAO LA---\n");
	//su dung for for de in mang da tao ra man hinh 
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			printf ("%5d", a[i][j]); 
		} 
		printf ("\n"); 
	} 
	 
	int Sum; 
	int four; // four = gia tri cua phan tu nam tren duong cheo 
	
	//su dung vong lap for de duyet va in ra cac phan tu tren duog cheo trong man hinh 
	for(int i = 0; i < n; i++){
		four =  a[i][i];		
		Sum += four;
	} 
	
	printf("---CAC PHAN TU TREN DUONG CHEO VA TONG CUA CAC PHAN TU---\n");
	printf ("Cac phan tu nam trên duong cheo la: \n") ;
	
	for(int i = 0; i < n; i++){
		printf ("%5d", a[i][i]);
	}
	printf ("\n") ;
	printf 	("\nTong cua cac phan tu nam tren duong cheo la: %d", Sum);
	
	return 0; 
	
} 
