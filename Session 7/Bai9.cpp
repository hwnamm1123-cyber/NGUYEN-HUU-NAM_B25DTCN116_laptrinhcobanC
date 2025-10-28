#include <stdio.h>
int main(){
	long long n, a, b, x, a_lapphuong, b_lapphuong;
	long long b_cantim; //khai bao them 1 bien b can tim = b de tranh bi loi
	int b_timthay = 1;
	int dem = 0; //dem so vong lap tim so a va b phu hop
	
	printf ("Moi ban nhap vao so nguyen duong n: ");
	if(scanf("%lld", &n) != 1 || n <= 0){
		printf ("Loi nhap lieu");
		return 1;
	} 
	
	printf("\nCac cap so nguyen khong am (a, b) thoa man a^3 + b^3 = %lld la:\n", n);
	
	for(a = 0; a * a * a <= n; a++){
		a_lapphuong = a * a * a; //tinh lap phuong cua a^3
		x = n - a_lapphuong; // x bang voi b^3
		b_timthay = 0; // dat gia tri b_timthay ban dau bang khong  
		
		for(b_cantim = 0; b_cantim * b_cantim * b_cantim <= x; b_cantim++){
			b_lapphuong = (b_cantim * b_cantim * b_cantim);
			if (b_lapphuong == x){
				b = b_cantim;
				b_timthay = 1; //sau khi thoa man tra ve gia tri b_timthay bang 1 va break 
				break;
			}
		}
		if (b_timthay == 1){ // tim thay gia tri hop le cua b => in ra man hinh gia tri dang tim kiem 
			printf("(%lld, %lld)\n", a, b);
            dem++;
		} 
	}
	
	if (dem == 0) { // dem ==0 <=> khong tim thay so hop le  
        printf("Khong tim thay cap so nao.\n");
    } else { 
        printf("\nTong cong tim thay %d cap so.\n", dem);
    }

    return 0;
}	
