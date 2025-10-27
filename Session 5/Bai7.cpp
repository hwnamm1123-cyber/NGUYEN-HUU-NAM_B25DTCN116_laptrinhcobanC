#include <stdio.h>
int main(){
	char Kytu, Kytu_Chuyendoi;
	printf ("Moi ban nhap vao ky tu: ");
	if (scanf (" %c", &Kytu) != 1){
		printf ("Loi nhap lieu");
		return 1;
	}
	if (Kytu >= 'a' && Kytu <= 'z'){
		Kytu_Chuyendoi = Kytu - 32;
		printf("Ky tu ban nhap la chu thuong");
        printf("\nChu hoa tuong ung la: %c", Kytu_Chuyendoi);
	} else if (Kytu >= 'A' && Kytu <= 'Z'){
        Kytu_Chuyendoi = Kytu + 32;
        printf("Ky tu ban nhap la chu hoa");
        printf("\nChu thuong tuong ung la: %c", Kytu_Chuyendoi);
    } else {
        printf("Ky tu ban nhap la: %c", Kytu);
        printf("\nKhong phai chu cai");
    }
    return 0;
}
