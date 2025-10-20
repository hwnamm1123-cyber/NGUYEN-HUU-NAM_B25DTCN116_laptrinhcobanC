#include <stdio.h>
int main(){
	int So_nguyen_4_chu_so, Sum = 0; 
	//VD so 1234, Sum = 0 de chuong trinh tra Sum ve gtri 0 tranh loi khi tinh phep tinh dau tien o dong t6 
	printf ("Moi ban nhap vao so nguyen co 4 chu so ngau nhien: "); 
	scanf ("%d", &So_nguyen_4_chu_so); //nhap tu ban phim 
	Sum += So_nguyen_4_chu_so % 10; // o day Sum gtri ban dau = 0, => ket qua chia lay phan du = 4 
	So_nguyen_4_chu_so = So_nguyen_4_chu_so / 10; // ket qua bang 123 
	Sum += So_nguyen_4_chu_so % 10; // ket qua bang 3 cong voi 1 lan Sum o tren(4) => bang 7 
	So_nguyen_4_chu_so = So_nguyen_4_chu_so / 10; // ket qua 12 
	Sum += So_nguyen_4_chu_so % 10; // ket qua bang 2 cong voi gtri Sum lan 2 => bang 9 
	So_nguyen_4_chu_so = So_nguyen_4_chu_so / 10; //ket qua bang 1  
	Sum += So_nguyen_4_chu_so % 10; //ket qua bang 1 cong voi gtri Sum lan 3 => bang 10 
	So_nguyen_4_chu_so = So_nguyen_4_chu_so / 10;// ket qua bang 0 
	Sum += So_nguyen_4_chu_so % 10;///ket qua bang 0 cong voi gtri Sum lan 4 => 10 
	printf ("Tong cua cac chu so la: %d", Sum);
	return 0; 
} 
