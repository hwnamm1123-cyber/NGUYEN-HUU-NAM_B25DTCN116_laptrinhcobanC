#include <stdio.h>
#include <math.h>
int main(){
	float a = 10, b = 15, c =20, S;
	S = (pow(a,2) + sqrt( pow(b,2) + 4 * a * c)) / (2 * a) - (pow(b,3) / pow(c,2)) + (sqrt(fabs(a - b))); 
	printf ("Ket qua cua phep toan S la: %f", S);
	return 0;
	 
} 

