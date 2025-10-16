#include <stdio.h>
#include <math.h> 
int main(){
	int number1 = 10, number2 = 15, Sum, Effect, Accumulate;
	float Division;
	Sum = number1 + number2;
	Effect = number1 - number2;
	Accumulate = number1 * number2; 
	Division = number1 / number2;
	printf (" Tong cua 2 so la : %d ", Sum );
	printf (" Hieu cua 2 so la : %d ", Effect );
	printf (" Tich cua 2 so la : %d ", Accumulate );
	printf (" Thuong cua 2 so la : %.2f ", Division );
	return 0;
	 
} 
