#include <stdio.h>
int main(){
	int So_dien_tieu_dung_trong_thang, Loai_ho_tieu_dung;
	long long Tien_dien;
	printf ("Moi ban nhap vao so dien tieu dung trong thang (kWh): ");
	if (scanf("%d", &So_dien_tieu_dung_trong_thang) != 1){
		printf("Loi nhap lieu");
		return 1;
	} 
	printf ("Moi ban nhap vao loai ho tieu dung (1-3): \n 1: Ho gia dinh. \n 2: Ho kinh doanh. \n 3: Ho san xuat \nHo tieu dung tuong ung cua ban la: ");
	if (scanf("%d", &Loai_ho_tieu_dung) != 1){
		printf ("Loi nhap lieu");
		return 1;
	}
	switch (Loai_ho_tieu_dung){
		case (1):
		    if (So_dien_tieu_dung_trong_thang > 200){
		    printf ("Bac tieu thu cua ban la: 4");
		    Tien_dien = So_dien_tieu_dung_trong_thang * 3000 + (So_dien_tieu_dung_trong_thang * 3000) * 0.05;
		    printf ("\nSo tien dien thang nay cua ban la: %lld VND", Tien_dien);
		} else if ((So_dien_tieu_dung_trong_thang > 100) && (So_dien_tieu_dung_trong_thang < 200)){
			printf ("Bac tieu thu cua ban la: 3");
			Tien_dien = So_dien_tieu_dung_trong_thang * 2500 + (So_dien_tieu_dung_trong_thang * 2500) * 0.05;
		    printf ("\nSo tien dien thang nay cua ban la: %lld VND", Tien_dien);
		} else if ((So_dien_tieu_dung_trong_thang > 50) && (So_dien_tieu_dung_trong_thang < 100)){
			printf ("Bac tieu thu cua ban la: 2");
			Tien_dien = So_dien_tieu_dung_trong_thang * 2000 + (So_dien_tieu_dung_trong_thang * 2000) * 0.05;
		    printf ("\nSo tien dien thang nay cua ban la: %lld VND", Tien_dien);
		} else if ((So_dien_tieu_dung_trong_thang > 0) && (So_dien_tieu_dung_trong_thang < 50)){
			printf ("Bac tieu thu cua ban la: 1");
			Tien_dien = So_dien_tieu_dung_trong_thang * 1500 + (So_dien_tieu_dung_trong_thang * 1500) * 0.05;
		    printf ("\nSo tien dien thang nay cua ban la: %lld VND", Tien_dien);
	}
	break; 
		case (2):	
		    if (So_dien_tieu_dung_trong_thang > 200){
		    printf ("Bac tieu thu cua ban la: 4");
		    Tien_dien = So_dien_tieu_dung_trong_thang * 3000 + (So_dien_tieu_dung_trong_thang * 3000) * 0.1;
		    printf ("\nSo tien dien thang nay cua ban la: %lld VND", Tien_dien);
		} else if ((So_dien_tieu_dung_trong_thang > 100) && (So_dien_tieu_dung_trong_thang < 200)){
			printf ("Bac tieu thu cua ban la: 3");
			Tien_dien = So_dien_tieu_dung_trong_thang * 2500 + (So_dien_tieu_dung_trong_thang * 2500) * 0.1;
		    printf ("\nSo tien dien thang nay cua ban la: %lld VND", Tien_dien);
		} else if ((So_dien_tieu_dung_trong_thang > 50) && (So_dien_tieu_dung_trong_thang < 100)){
			printf ("Bac tieu thu cua ban la: 2");
			Tien_dien = So_dien_tieu_dung_trong_thang * 2000 + (So_dien_tieu_dung_trong_thang * 2000) * 0.1;
		    printf ("\nSo tien dien thang nay cua ban la: %lld VND", Tien_dien);
		} else if ((So_dien_tieu_dung_trong_thang > 0) && (So_dien_tieu_dung_trong_thang < 50)){
			printf ("Bac tieu thu cua ban la: 1");
			Tien_dien = So_dien_tieu_dung_trong_thang * 1500 + (So_dien_tieu_dung_trong_thang * 1500) * 0.1;
		    printf ("\nSo tien dien thang nay cua ban la: %lld VND", Tien_dien);
	}
	break; 
	    case (3):	
		    if (So_dien_tieu_dung_trong_thang > 200){
		    printf ("Bac tieu thu cua ban la: 4");
		    Tien_dien = (So_dien_tieu_dung_trong_thang * 3000)+ (So_dien_tieu_dung_trong_thang * 3000) * 0.08;
		    printf ("\nSo tien dien thang nay cua ban la: %lld VND", Tien_dien);
		} else if ((So_dien_tieu_dung_trong_thang > 100) && (So_dien_tieu_dung_trong_thang < 200)){
			printf ("Bac tieu thu cua ban la: 3");
			Tien_dien = So_dien_tieu_dung_trong_thang * 2500 + (So_dien_tieu_dung_trong_thang * 2500) * 0.08;
		    printf ("\nSo tien dien thang nay cua ban la: %lld VND", Tien_dien);
		} else if ((So_dien_tieu_dung_trong_thang > 50) && (So_dien_tieu_dung_trong_thang < 100)){
			printf ("Bac tieu thu cua ban la: 2");
			Tien_dien = So_dien_tieu_dung_trong_thang * 2000 + (So_dien_tieu_dung_trong_thang * 2000) * 0.08;
		    printf ("\nSo tien dien thang nay cua ban la: %lld VND", Tien_dien);
		} else if ((So_dien_tieu_dung_trong_thang > 0) && (So_dien_tieu_dung_trong_thang < 50)){
			printf ("Bac tieu thu cua ban la: 1");
			Tien_dien = So_dien_tieu_dung_trong_thang * 1500 + (So_dien_tieu_dung_trong_thang * 1500) * 0.08;
		    printf ("\nSo tien dien thang nay cua ban la: %lld VND", Tien_dien);
		}
	}
	return 0;
} 
