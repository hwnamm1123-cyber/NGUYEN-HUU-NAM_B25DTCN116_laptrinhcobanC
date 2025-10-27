#include <stdio.h>
int main(){
	float Diem;
	printf ("Moi ban nhap vao diem: ");
	if (scanf ("%f", &Diem) != 1){
		printf ("Loi nhap lieu");
		return 1;
	}
    
    if (Diem >10){
    	printf ("Vuot qua gioi han diem");
	} else if(Diem >= 8){
    	printf ("Hoc luc gioi");
	} else if (Diem >= 6.5){
		printf ("Hoc luc kha");
	} else if (Diem >= 5){
		printf ("Hoc luc trung binh");
	} else if (Diem < 5){
		printf ("Hoc luc yeu");
	}
	return 0;
} 
