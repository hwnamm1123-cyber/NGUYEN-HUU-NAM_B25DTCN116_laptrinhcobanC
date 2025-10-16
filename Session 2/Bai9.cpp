#include <stdio.h>
#include <math.h>
int main(){
	int a = 10, b = 15, c =20, A;
	A = pow(a,2) + pow(b,2) + 2 * c + sqrt(a + b -c);
	printf ("Ket qua cua phep toan A la: %d", A);
	return 0;
	 
} 
