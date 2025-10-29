#include <stdio.h> 
int main(){
	int a[5] = {10, 20, 30, 40, 50};
	for (int i = 0; i < 5; i ++){
		printf ("a[%d] = %d \n", i, a[i]); 
	} 
	int asize = sizeof(a) / sizeof (int);
	printf("Kich thuoc cua mang a la: %d", asize); 
	return 0; 
} 
