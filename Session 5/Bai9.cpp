#include <stdio.h>
int main(){
	int So_ngay_cong_trong_thang, Chuc_vu; 
	long long  Luong;
	printf ("Moi ban nhap vao chuc vu tuong ung (1-3)\n 1: Nhan vien \n 2: To truong \n 3: Quan ly \nSo chuc vu tuong ung cua ban la: ");
	if (scanf("%d", &Chuc_vu) != 1){
		printf ("Loi nhap lieu");
		return 1; 
	} 
	printf ("Moi ban nhap vao so ngay cong trong thang: ");
	if (scanf("%d", &So_ngay_cong_trong_thang) != 1){
		printf ("Loi nhap lieu");
		return 1; 
	} 
	switch (Chuc_vu){
		case 1 :
			if (So_ngay_cong_trong_thang > 26){
				Luong =  So_ngay_cong_trong_thang * 160000 *  Chuc_vu + 500000 + (So_ngay_cong_trong_thang - 26) * 200000;
				printf ("So tien luong thang nay cua ban la: %lld VND", Luong);
			} else if (So_ngay_cong_trong_thang <= 26){
				Luong =  So_ngay_cong_trong_thang * 160000 *  Chuc_vu + 5000000;
				printf ("So tien luong thang nay cua ban la: %lld VND", Luong);
			}
	break;
    }
			
	switch (Chuc_vu){
		case 2 :
			if (So_ngay_cong_trong_thang > 26){
				Luong =  So_ngay_cong_trong_thang * 160000 *  Chuc_vu + 1000000 + (So_ngay_cong_trong_thang - 26) * 200000;
				printf ("So tien luong thang nay cua ban la: %lld VND", Luong);
			} else if (So_ngay_cong_trong_thang <= 26){
				Luong =  So_ngay_cong_trong_thang * 160000 *  Chuc_vu + 5000000;
				printf ("So tien luong thang nay cua ban la: %lld VND", Luong);
			}		 
	}
	switch (Chuc_vu){
		case 3 :
			if (So_ngay_cong_trong_thang > 26){
				Luong =  So_ngay_cong_trong_thang * 160000 *  Chuc_vu + 2000000 + (So_ngay_cong_trong_thang - 26) * 200000;
				printf ("So tien luong thang nay cua ban la: %lld VND", Luong);
			} else if (So_ngay_cong_trong_thang <= 26){
				Luong =  So_ngay_cong_trong_thang * 160000 *  Chuc_vu + 5000000;
				printf ("So tien luong thang nay cua ban la: %lld VND", Luong);
			}
	break;
	}
	return 0; 
} 
