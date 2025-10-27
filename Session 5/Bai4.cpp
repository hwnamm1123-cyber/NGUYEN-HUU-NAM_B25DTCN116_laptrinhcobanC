#include <stdio.h>
int main(){
	int Thu_nhap, Thue_phai_dong;
	printf ("Moi ban nhap vao thu nhap 1 thang: ");
	if (scanf ("%d", &Thu_nhap) != 1){
		printf ("Loi nhap lieu");
		return 1;
	}
	
	if (Thu_nhap > 10000000){
		Thue_phai_dong = Thu_nhap * 0.15;
		printf ("So tien thue thu nhap phai dong la: %d", Thue_phai_dong);
	} else if ((Thu_nhap > 5000000) && (Thu_nhap <= 10000000)){
		Thue_phai_dong = Thu_nhap * 0.1;
		printf ("So tien thue thu nhap phai dong la: %d", Thue_phai_dong);
	} else if (Thu_nhap <= 5000000){
		Thue_phai_dong = Thu_nhap * 0.05;
		printf ("So tien thue thu nhap phai dong la: %d", Thue_phai_dong);
	}
	
	return 0;
}
