#include <stdio.h>
int main(){
	float Celsius, Fahrenheit; 
	printf ("Moi ban nhap vao nhiet do theo thang do Celsius: ");
	scanf ("%f", &Celsius);
	Fahrenheit = Celsius * 9/5 + 32;
	printf ("Doi sang thang nhiet do Fahrenheit co gia tri la: %f", Fahrenheit);
	return 0; 
} 
