#include <stdio.h>
#include <math.h>
int main (){
	unsigned int So_nguyen_duong_n;
	float A ; 
	printf ("Moi ban nhap gia tri cua so nguyen duong n de tinh toan gia tri cua bai toan: ");
	scanf ("%u", &So_nguyen_duong_n);
	A = (1.0 / ((So_nguyen_duong_n - 1) * (So_nguyen_duong_n))) + (1.0 / ((So_nguyen_duong_n) * (So_nguyen_duong_n + 1))) + (1.0 / ((So_nguyen_duong_n + 1) * (So_nguyen_duong_n + 2)));
	// ep kieu float => khong dung gia tri 1 ma phai dung 1.0 de thuc hien phep chia float 
	printf ("Gia tri cua bai toan voi so nguyen duong n da nhap vao la: %f ", A);
	return 0; 
} 
