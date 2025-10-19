#include <stdio.h>
#include <math.h>
int main(){
	int number = 12345, Sum;
	Sum += number % 10;
	number = number / 10;
	Sum += number % 10;
	number = number / 10;
	Sum += number % 10;
	number = number / 10;
	Sum += number % 10;
	number = number / 10;
	Sum += number % 10;
	printf ("Tong cua hai so la: %d", Sum);
	return 0;
	 
	
} 
