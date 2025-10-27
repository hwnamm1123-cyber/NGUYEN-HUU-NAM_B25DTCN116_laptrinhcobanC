#include <stdio.h>
int main(){
    unsigned int Year;
	printf ("Moi ban nhap vao so nguyen dai dien cho nam: ");
	scanf ("%u", &Year);
	
	if ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0)) {
		printf  ("Nam %u la nam nhuan", Year);
	} else {
		printf ("Nam %u khong phai la nam nhuan", Year);
	} 
	return 0; 
}
