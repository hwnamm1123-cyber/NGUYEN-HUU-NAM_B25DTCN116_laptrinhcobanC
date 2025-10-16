#include <stdio.h>
#include <math.h>

int main(){
	int integer_1 = 10, integer_2 = 15, Sum1;
	float real_number = 10.5, Sum2;
	Sum1 =  integer_1 +  integer_2 + real_number;
	Sum2 =  integer_1 +  integer_2 + real_number;
	printf ("Ket qua tinh toan la: \n");
	printf ("Tong cua 3 so (int) la: %d", Sum1);
	printf ("\n Tong cua 3 so (float) la: %f", Sum2);
	return 0; 
	 
} 
