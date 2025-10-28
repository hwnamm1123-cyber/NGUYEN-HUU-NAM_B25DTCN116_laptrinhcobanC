#include <stdio.h>
int main(){
	int n, Sobandau, Sodaonguoc, Socuoi;
	n = Sobandau;
	
	printf ("Moi ban nhap vao so nguyen n: ");
	if(scanf("%d", &n) != 1 || n <= 0){
		printf ("Loi nhap lieu");
		return 1;
	}
	
	while (n > 0){
		Socuoi = n % 10;
		Sodaonguoc = Sodaonguoc * 10 + Socuoi;
		n /= 10;
	}
	printf ("So dao nguoc la: %d", Sodaonguoc);
	return 0;
	
}
