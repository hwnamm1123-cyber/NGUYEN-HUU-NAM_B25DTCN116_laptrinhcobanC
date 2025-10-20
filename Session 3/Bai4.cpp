#include <stdio.h>
#include <math.h> 
int main(){
    float Diem_Toan, Diem_Van, Diem_Anh, Diem_Trung_Binh; 
	printf ("Moi nhap vao diem Toan cua ban:");
	scanf ("%f", &Diem_Toan);
	printf ("Moi nhao vao diem Van cua ban: ");
	scanf ("%f", &Diem_Van);
	printf ("Moi nhap vao diem Anh cua ban: ");
	scanf ("%f", &Diem_Anh);
	Diem_Trung_Binh = (Diem_Toan + Diem_Van + Diem_Anh) / 3;
	printf ("Diem trung binh cua ban la: %.2f \n", Diem_Trung_Binh);
    return 0; 
}
