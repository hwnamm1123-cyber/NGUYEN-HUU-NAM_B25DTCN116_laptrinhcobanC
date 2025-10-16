#include <stdio.h>
#include <math.h>
int main(){
	int number = 12345, number1, number2;
	int result = 0 ; 
	number1 = number % 10;
	number2 = number / 10;
	result = result * 10 + number1;
	printf("\nSo da duoc dao nguoc (result): %d\n", result);
    
    return 0; 
} 
