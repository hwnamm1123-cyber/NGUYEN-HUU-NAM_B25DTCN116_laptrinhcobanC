#include <stdio.h>
int main(){
	int a, b,c;
	printf ("Moi nhap vao do dai cua canh a: ");
	scanf ("%d", &a);
	printf ("Moi nhap vao do dai cua canh b: ");
	scanf ("%d", &b);
	printf ("Moi nhap vao do dai cua canh c: ");
	scanf ("%d", &c);
	
	if (a <= 0 || b <= 0 || c <= 0) {
		printf ("Khong phai 3 canh cua tam giac (Canh cua tam giac can mang gia tri duong)");
	} else if ((a + b > c ) && (a + c > b) && (c + b > a)) {
		printf ("La 3 canh cua tam giac");
	} else {
		printf ("Khong phai 3 canh tam giac");
	}
	return 0;
} 
