#include <stdio.h>

void swap(int *a, int *b);

int main(){
	int a = 5, b = 10;
	printf ("Gia tri cua a la: %d\n", a);
	printf ("Gia tri cua b la: %d\n", b);
	
	swap(&a, &b);
	printf ("Ket qua sau khi hoan doi la: \n");
	printf ("Gia tri moi cua a la: %d\n", a);
	printf ("Gia tri moi cua b la: %d\n", b);
	
	return 0;
}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
