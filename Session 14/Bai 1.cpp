#include <stdio.h>

int sum(int a, int b);
int main(){
	int num1 = 15;
    int num2 = 25;
    int total;
    total = sum(num1, num2);
    printf("Tong cua %d va %d la: %d\n", num1, num2, total);
    printf("Tong cua 100 va 50 la: %d\n", sum(100, 50));
    return 0;
} 

int sum(int a, int b) {
	return a + b; 
}
