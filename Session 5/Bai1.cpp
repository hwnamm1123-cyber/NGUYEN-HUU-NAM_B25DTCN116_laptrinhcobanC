#include <stdio.h>
int main(){
	int a, b;
	printf ("Moi ban nhap vao so nguyen a: ");
	scanf ("%d", &a);
	printf ("Moi ban nhap vao so nguyen b: ");
	scanf ("%d", &b); 
	
	if (a > b) {
		printf ("So lon hon la a");
	} else if (a < b){
		printf ("So lon hon la b");
	}
	return 0;
} 
