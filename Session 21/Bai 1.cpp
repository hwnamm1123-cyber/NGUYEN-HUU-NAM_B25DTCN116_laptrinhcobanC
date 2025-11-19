#include <stdio.h>
#include <string.h>

typedef struct {
	char model[50];
	int year;
	float price;
} Car;

int main(){
	Car myCar;
	
	strcpy(myCar.model, "Maybach S680");
	myCar.year = 2024;
	myCar.price = 360000;
	
	printf ("---THONG TIN XE---\n");
	printf ("Mau xe: %s\n", myCar.model);
	printf ("Nam san xuat: %d\n", myCar.year);
	printf ("Gia xe: %.2f$\n", myCar.price);
	
	return 0;
}
