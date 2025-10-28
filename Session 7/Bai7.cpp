#include <stdio.h>
#include <math.h>
int main(){
	
	int a, b, temp;
	int dem = 0; //khai bao ham de dem so nguyen to cho dong t40 va in ra o dong t43
	printf("Moi ban nhap vao so nguyen a: ");
	if (scanf("%d", &a) != 1 || a <= 0){
		printf ("Loi nhap lieu.");
		return 1;
	}
	printf("Moi ban nhao vao so nguyen b: ");
	if (scanf("%d", &b) != 1 || b <= 0){
		printf ("Loi nhap lieu.");
		return 1;
	}
	
	if (a > b){
		temp = a;
		a = b;
		b = temp; //dieu kien khi a > b se thay doi thu tu cua a va b => cho ra khoang gia tri luon thoa man
	}
	
	printf("Cac so nguyen to trong khoang [%d, %d] la:\n", a, b); 
	
	for (int i = a; i <= b; i++){ //khai bao cho ham for dau tien 
		int Lasonguyento = 1;
			for (int j = 2; j * j <= i; j++){  
				if (i % j == 0){ 
				Lasonguyento = 0;
				break; // su dung break de thoat ra khoi vong lap khi k su dung them else 
			}
		} 
		if (Lasonguyento == 1){ //for dau tien: neu la so nguyen to se +1 don vi 
            printf("%d ", i);
            dem++;
        }
	}	 
	
	if (dem == 0) {
        printf("Khong co so nguyen to nao trong pham vi nay.\n");
    } else {
        printf("\n(Tong cong %d so nguyen to)", dem); //printf cua for thu nhat
    }
    
	return 0;
}
