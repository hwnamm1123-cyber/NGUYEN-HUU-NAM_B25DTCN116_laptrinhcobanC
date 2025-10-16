#include <stdio.h>
#include <math.h>
int main(){
	float  a = 3, b = 4, c =2, S;
	S = (sqrt(pow(a,2) + pow(b,2))) / (c + 1) + (a * b ) / c - sqrt(fabs(a - b) + pow(c,2)); 
	printf ("Ket qua cua phep toan S la: %.2f", S);
	return 0;
	 
} 

