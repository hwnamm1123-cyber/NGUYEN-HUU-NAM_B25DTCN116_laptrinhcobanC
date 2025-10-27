#include <stdio.h>
int main(){
	float a, b, x;
	printf ("Nhap so thuc a,b giai quyet phuong trinh bac nhat: ax + b = 0 \n");
	
	printf ("Moi ban nhap vao so thuc a: ");
	if (scanf("%f", &a) != 1){
		printf("Loi nhap lieu"); // in ra khi scanf tra ve gia tri khac 1 tuc la 0  
		return 1; // Dat ve 1 neu tra ve 0 => that bai 	 
	}
	printf ("Moi ban nhap vao so thuc b: ");
	if (scanf("%f", &b) != 1){
		printf("Loi nhap lieu");
		return 1;
    }
    
	if (a == 0) {
		if (b == 0) {
			printf("Phuong trinh co vo so nghiem");
		} else {
			printf("Phuong trinh vo nghiem");
		}
	} else {	
		x = -b / a; 
		printf("Phuong trinh co nghiem duy nhat: x = %.2f", x);
	}
	
	
	return 0;
}
