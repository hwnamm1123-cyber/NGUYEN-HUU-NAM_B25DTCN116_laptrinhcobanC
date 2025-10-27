#include <stdio.h>
int main(){
	int n;
	printf ("Moi ban nhap vao so nguyen: ");
	scanf ("%d", &n);
	if (n % 2 ==0) {
		printf ("So vua nhap la so chan"); 
	} else {
		printf ("So vua nhap la so le"); 
	} 
	return 0; 
}
