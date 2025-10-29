#include <stdio.h>
int main(){
	int Table_number, Multiplication_number; 
	printf ("--- BANG CUU CHUONG TU 1 - 9 ---\n");
	for (Table_number = 1; Table_number <= 9; Table_number++){
		printf ("\nBANG CUU CHUONG %d\n", Table_number);
		for(Multiplication_number = 1; Multiplication_number <= 10; Multiplication_number++){
			printf ("\n%d * %d = %d\n", Table_number, Multiplication_number, Table_number * Multiplication_number); 
		} 
	} 
	return 0; 
} 

