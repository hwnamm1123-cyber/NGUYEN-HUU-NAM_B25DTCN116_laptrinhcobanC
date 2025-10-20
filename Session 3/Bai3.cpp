#include <stdio.h>
#include <math.h> 
int main(){
	float r, Chu_vi, Dien_tich; 
	printf ("Moi ban nhap vao ban kinh r: ");
	scanf ("%f", &r);
	Chu_vi = 2 *  M_PI * r;
	Dien_tich =  M_PI * r * r;
	printf ("Chu vi cua hinh tron la: %.2f \n", Chu_vi);
	printf ("Dien tich cua hinh tron la: %.2f", Dien_tich);
	return 0; 
} 

