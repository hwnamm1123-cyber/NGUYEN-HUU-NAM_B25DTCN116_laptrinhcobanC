#include <stdio.h>
int main(){
	float Chieu_cao, Do_dai_day, Dien_tich_tam_giac; 
	printf ("Moi ban nhap vao chieu cao cua tam giac: ");
	scanf ("%f", &Chieu_cao);
	printf ("Moi ban nhap vao do dai day cua hinh tam giac: ");
	scanf ("%f", &Do_dai_day);
	Dien_tich_tam_giac = (Chieu_cao * Do_dai_day) / 2;
	printf ("Dien tich cua tam giac la: %.2f", Dien_tich_tam_giac);
	return 0; 
} 
