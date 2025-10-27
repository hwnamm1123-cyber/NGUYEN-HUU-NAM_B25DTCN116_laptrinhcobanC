#include <stdio.h>
int main(){
    unsigned int Ngay, Thang, Nam;
    printf ("Moi ban nhap vao ngay: ");
    scanf ("%u", &Ngay);
    printf ("Moi ban nhap vao thang: ");
    scanf ("%u", &Thang);
	printf ("Moi ban nhap vao Nam: ");
	scanf ("%u", &Nam);
	
	
	if (Thang < 1 || Thang > 12) {
        printf ("Ngay thang nam khong hop le (Thang khong hop le)");
    }
    
	
    if (Ngay == 0 || Thang == 0 || Nam == 0) {
        printf ("Ngay thang nam khong hop le (Gia tri phai lon hon 0)");
    }
	
	
	if ((Thang == 2) && (1 <= (Thang == 2) <= 29) && ((Nam % 400 == 0) || (Nam % 4 == 0 && Nam % 100 != 0))){  //Nam nhuan
	    printf ("Ngay thang nam hop le");
	} else if ((Thang == 2) && (1 <= (Thang == 2) <= 28) != ((Nam % 400 == 0) || (Nam % 4 == 0 && Nam % 100 != 0))){  //Nam binh thuong
		printf ("Ngay thang nam hop le");
	} else {
		printf ("Ngay thang nam khong hop le");
	} 
	
	
	if ((Ngay >= 1 && Ngay <= 30) && (Thang == 4 || Thang == 6 || Thang == 9 || Thang == 11)) {
		printf ("Ngay thang nam hop le");
    } else if ((Ngay >= 1 && Ngay <= 31) && (Thang == 1 || Thang == 3 || Thang == 5 || Thang == 7 || Thang == 8 || Thang == 10 || Thang == 12)) {
    	printf ("Ngay thang nam hop le");
    } else {
    	printf ("Ngay thang nam khong hop le");
	}
    
	
	return 0; 
}
