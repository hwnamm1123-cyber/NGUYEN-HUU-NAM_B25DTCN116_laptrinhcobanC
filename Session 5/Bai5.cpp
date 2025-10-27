#include <stdio.h>
int main(){
	int age, Gia_ve_xe = 20000, So_tien_phai_tra;
	printf ("Moi ban nhap vao tuoi cua ban: ");
	if (scanf ("%d", &age) != 1 ){
		printf ("Loi nhap lieu");
		return 1;
	}
	
	if (age , 0){
		printf ("Tuoi khong hop le");
	} else if (age > 60){
		So_tien_phai_tra = Gia_ve_xe * 0.7;
		printf ("So tien ve: %d VND", So_tien_phai_tra);
	} else if ((age >= 19) && (age <= 60)){
		So_tien_phai_tra = Gia_ve_xe * 1;
		printf ("So tien ve: %d VND", So_tien_phai_tra);
	} else if ((age >= 6) && (age <= 18)){
		So_tien_phai_tra = Gia_ve_xe * 0.5;
		printf ("So tien ve: %d VND", So_tien_phai_tra);
    } else if (age < 6){
    		printf ("So tien ve: 0 VND");
	}
	
	return 0;
}

