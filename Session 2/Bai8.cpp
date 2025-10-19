#include <stdio.h>
#include <math.h>
int main(){
	int number = 12345, a, b;
    int result = 0;
    a = number % 10;
    b = number / 10;
    result = result * 10 + a;
    a = b % 10;
    b = b / 10;
    result = result * 10 + a;
    a = b % 10;
    b = b / 10;
    result = result * 10 + a;
    a = b % 10;
    b = b / 10;
    result = result * 10 + a;
    a = b % 10;
    b = b / 10;
    result = result * 10 + a;
	printf("\nSo da duoc dao nguoc (result): %d\n", result);
    
    return 0; 
} 
