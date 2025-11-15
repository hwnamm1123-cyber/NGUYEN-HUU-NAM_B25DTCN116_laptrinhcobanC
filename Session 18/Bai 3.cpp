#include <stdio.h>

void sum(int *a, int *b, int *ptr);

int main(){
	int number1 = 5, number2 = 10;
	int total = 0;
	printf ("Gia tri cua number1 la: %d\n", number1);
	printf ("Gia tri cua number2 la: %d\n", number2);
	
	sum(&number1, &number2, &total);
	printf ("Ket qua sau khi tinh tong la: %d\n", total);
	
	return 0;
}

void sum(int *a, int *b, int *ptr){
	*ptr = *a + *b;
}
