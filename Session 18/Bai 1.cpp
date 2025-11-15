#include <stdio.h>

 int main(){
 	int value = 36;
 	int *a = &value;
 	
 	printf ("1. Gia tri cua bien value: %d\n", value);
 	printf ("2. Dia chi cua ben value: %p\n", &value);
 	
 	printf ("3. Dia chi con tro a dang giu la: %p\n", a);
 	printf ("4. Gia tri cua bien value (dung *a) la: %d\n", *a);
 	
 	return 0;
 }
