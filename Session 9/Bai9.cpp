#include <stdio.h>
int main() {
	int a[] = {1,5,2,3,23,5,1,2};
	
	//tinh kich thuoc cua mang 
	int n = sizeof(a) / sizeof (a[0]) ;;
	
	//su dung vong lap for for de duyet qua cac phan tu cos tan xuat saut hien nhieu trong mang
	int flag_max01; // Bien co 1 dem so luon tam xuat max
	int flag_max02 = a[0]; //Bien co 2 tim gia tri co tan suat max => xuat hien nhieu nhat
	for(int i = 0; i < n; i++){
		//tao 1 bien dem so lan xuat hien cua a[]
		int dem = 0; // dat lai bang 0 dem lai tu dau khi bat dau vong lap moi
		for (int j = 0; j < n; j++){
			if (flag_max02 == a[j]){
				dem++;
			}
		}
		// ta can cap nhat lai gia tri cua max lien tuc trong vong lap
		if (dem > flag_max01){
			flag_max01 = dem;
			flag_max02 = a[i];
		}
	}
	
	printf ("---KET QUA TIM KIEM---");
	printf ("\nMang da khai bao la: {1,5,2,3,23,5,1,2}");
	printf ("\nGia tri co tan suat xuat hien hieu nhat la: %d", flag_max02);
	printf ("\nSo lan xuat hien cua %d la: %d", flag_max02, flag_max01);
	
	return 0;
	
}

//tu duy giai quyet bai toan:
//duyet qua cac phan tu cua mang va dem so lan xuat hien cua phan tu do va luu vao 1 bien dem
//luu gia tri cua bien dem cho tan so max
//dat lai gia tri dem ve 0 khi bat dau dem tan xuat cua 1 so moi va so sanh tan xuat da gan truoc do
//neu lon hon => tan xuat max moi va lap lai lien tuc den so cuoi cung cua mang
