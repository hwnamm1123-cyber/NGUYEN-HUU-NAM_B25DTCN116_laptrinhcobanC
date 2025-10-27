#include <stdio.h>
#include <math.h>
int main(){
	int So_chi_dau_thang, So_chi_cuoi_thang, So_dien_thang_nay;
	printf ("Moi ban nhap vao chi so cu: ");
	scanf ("%d", &So_chi_dau_thang);
	printf ("Moi ban nhap vao chi so moi: ");
	scanf ("%d", &So_chi_cuoi_thang);
	So_dien_thang_nay = So_chi_cuoi_thang - So_chi_dau_thang;
	printf ("So dien thang nay la: %d", So_dien_thang_nay);
	
	long long int Tien_dien_tieu_thu_trong_thang;
	if (So_dien_thang_nay < 50 ){
		Tien_dien_tieu_thu_trong_thang = So_dien_thang_nay * 10000;
		printf ("\nTien dien tieu thu trong thang la: %lld VND", Tien_dien_tieu_thu_trong_thang);
	} else if (So_dien_thang_nay < 100){
		Tien_dien_tieu_thu_trong_thang = So_dien_thang_nay * 15000;
		printf ("\nTien dien tieu thu trong thang la: %lld VND", Tien_dien_tieu_thu_trong_thang);
	} else if (So_dien_thang_nay < 150){
		Tien_dien_tieu_thu_trong_thang = So_dien_thang_nay * 20000;
		printf ("\nTien dien tieu thu trong thang la: %lld VND", Tien_dien_tieu_thu_trong_thang);
    } else if (So_dien_thang_nay < 200){
		Tien_dien_tieu_thu_trong_thang = So_dien_thang_nay * 25000;
		printf ("\nTien dien tieu thu trong thang la: %lld VND", Tien_dien_tieu_thu_trong_thang);
    } else if (200 <= So_dien_thang_nay){
		Tien_dien_tieu_thu_trong_thang = So_dien_thang_nay * 30000;
		printf ("\nTien dien tieu thu trong thang la: %lld VND", Tien_dien_tieu_thu_trong_thang);
    }
    return 0;
}
