#include <stdio.h>
#include <math.h>
int main(){
	unsigned int So_nguyen_duong_a, So_nguyen_duong_b;
	float S; 
	printf ("Moi ban nhap vao so nguyen duong a: ");
	scanf ("%u", &So_nguyen_duong_a);
	printf ("Moi ban nhap vao so nguyen duong b: ");
	scanf ("%u", &So_nguyen_duong_b);
	S = (sqrt(So_nguyen_duong_a + sqrt(So_nguyen_duong_b + 1))) + (sqrt(So_nguyen_duong_b + sqrt(pow(So_nguyen_duong_a,2) + pow(So_nguyen_duong_b,2))));
	printf ("Ket qua cua phep toan voi so nguyen duong a va b da dat la: %.2f", S);
	return 0;
	 
} 
 
