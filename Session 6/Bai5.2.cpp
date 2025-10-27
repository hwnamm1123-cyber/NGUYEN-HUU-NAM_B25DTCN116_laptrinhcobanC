#include <stdio.h>
int main(){
	int SoBang, SoNhan; 
	printf ("--- BANG CUU CHUONG TU 1 - 9 ---\n");
	for (SoBang = 1; SoBang <= 9; SoBang++){
		printf ("\nBANG CUU CHUONG %d\n", SoBang);
		for(SoNhan = 1; SoNhan <= 10; SoNhan++){
			printf ("\n%d * %d = %d\n", SoBang, SoNhan, SoBang * SoNhan); 
		} 
	} 
	return 0; 
} 
