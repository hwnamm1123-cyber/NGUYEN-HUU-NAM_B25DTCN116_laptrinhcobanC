#include <stdio.h>
int main(){
	float a, b, Ket_qua;
	char Toan_tu;
	
	printf ("Moi ban nhap vao so thuc a: ");
	if (scanf("%f", &a) != 1){
		printf ("Loi nhap lieu");
		return 1;
	}
	printf ("Moi ban nhap vao so thuc b: ");
	if (scanf("%f", &b) != 1){
		printf ("Loi nhap lieu");
		return 1;
	}
	printf ("Moi ban nhap vao toan tu: ");
	if (scanf(" %c", &Toan_tu) != 1){
		printf ("Loi nhap lieu");
		return 1;
	}
		
	switch (Toan_tu){
		case '+' :
		    Ket_qua = a + b;
		    printf ("Ket qua cua ban la: %.2f + %.2f = %.2f", a, b, Ket_qua);
		    break;
		case '-' :
			Ket_qua = a - b;
			printf ("Ket qua cua ban la: %.2f - %.2f = %.2f", a, b, Ket_qua);
			break;
		case '*' :
			Ket_qua = a * b;
			printf ("Ket qua cua ban la: %.2f * %.2f = %.2f", a, b, Ket_qua);
			break;
		case '/' :
			if (b == 0){
				printf ("Loi khong the chia het cho 0");
			} else {
			Ket_qua = a / b;
			printf ("Ket qua cua ban la: %.2f / %.2f = %.2f", a, b, Ket_qua);
		    }
			break;
		default :
			printf ("Toan tu khong hop le");
			break;
		}
	return 0;
}
