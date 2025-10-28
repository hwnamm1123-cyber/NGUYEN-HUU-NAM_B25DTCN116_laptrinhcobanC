#include <stdio.h>
int main(){
	int n, temp, Sobandau, Sodaonguoc = 0 , Socuoi; //videu nhap vao 1991
	
	printf ("Moi ban nhap vao so nguyen duong n: ");
	if(scanf("%d", &n) != 1 || n <= 0){
		printf ("Loi nhap lieu.");
		return 1;
	} 
	
	Sobandau = n; //lua lai so ban dau
	
	while (n > 0){
		temp = n % 10;
		Sodaonguoc = Sodaonguoc * 10 + temp;
		n /= 10  ;
	}
	if (Sodaonguoc == Sobandau){
		printf ("So nguyen duong ban nhap la so doi xung");
	} else {
		printf ("So nguyen duong ban nhap khong phai la so doi xung");
	}
	return 0;
}
