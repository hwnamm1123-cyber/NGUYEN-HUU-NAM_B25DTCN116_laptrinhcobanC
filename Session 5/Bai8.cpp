#include <stdio.h>
int main(){
	int Met_khoi_nuoc_tieu_thu_trong_thang;
	long long So_tien_phai_tra;
	printf ("Moi ban nhap vao so met khoi tieu thu trong thang: ");
	if (scanf("%d", &Met_khoi_nuoc_tieu_thu_trong_thang) != 1){
		printf ("Loi nhap lieu");
		return 1;
	} 
	
	if (Met_khoi_nuoc_tieu_thu_trong_thang	> 30) {
		So_tien_phai_tra = (10 * 6000) + (10 * 7000) + (10 * 8500) + (Met_khoi_nuoc_tieu_thu_trong_thang - 30) * 10000;
		printf ("So tien phai tra cua thang la: %lld VND", So_tien_phai_tra);
	} else if ((Met_khoi_nuoc_tieu_thu_trong_thang > 20) && (Met_khoi_nuoc_tieu_thu_trong_thang < 30)){
		So_tien_phai_tra = (10 * 6000) + (10 * 7000) + (Met_khoi_nuoc_tieu_thu_trong_thang - 20) * 8500;
		printf ("So tien phai tra cua thang la: %lld VND", So_tien_phai_tra);
	} else if  ((Met_khoi_nuoc_tieu_thu_trong_thang > 10) && (Met_khoi_nuoc_tieu_thu_trong_thang < 20)){
		So_tien_phai_tra = (10 * 6000) + (Met_khoi_nuoc_tieu_thu_trong_thang - 10) * 7000;
		printf ("So tien phai tra cua thang la: %lld VND", So_tien_phai_tra);
	} else if (Met_khoi_nuoc_tieu_thu_trong_thang < 10){
		So_tien_phai_tra = Met_khoi_nuoc_tieu_thu_trong_thang * 6000;
		printf ("So tien phai tra cua thang la: %lld VND", So_tien_phai_tra);
	} else if (Met_khoi_nuoc_tieu_thu_trong_thang < 0){
		printf ("Loi nhap lieu (So met khoi tieu thu trong thang > 0)");
	}
	return 0;
}
