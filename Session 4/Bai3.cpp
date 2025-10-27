#include <stdio.h>
int main(){
	int n;
	printf ("Moi ban nhap vao so nguyen n: ");
	scanf ("%d", &n);
	if (n % 5 ==0, n % 3 == 0){
		printf ("So nay chia het cho 3 va 5");
	} else if (n % 3 ==0) {
		printf ("So nay chia het cho 3");
	} else if (n % 5 ==0) {
		printf ("So nay chia het cho 5");
	}  
	return 0; 
	
}
