#include <stdio.h>
#include <math.h>
int main(){
	int Mu = 0, Number, i;
	int Number2 = Number, TongLuythua = 0;
	
	printf("Moi ban nhap vao so nguyen duong xet so Armstrong: "); //vidu lau so 153
	if(scanf("%d", &Number) != 1 || Number <= 0){
		printf("Loi nhap lieu.");
		return 1;
	}
	
 	while (Number > 0){ 
 		Mu++;
 		Number /= 10; // bat dau vong while +1 vao so mu
	} 
	int Number3 = Number2;
	while (Number2 > 0){
		i = Number2 % 10; // lap lan 1 => 3
		TongLuythua += pow(i,Mu); //=> so mu ra 3
		Number2 /= 10; // => chia tu 153 xuong 15 va lap lai vong lap o dong 19
	} 
	if (Number3 == TongLuythua){
		printf ("So ban nhap la so Armstrong");
	} else {
		printf ("So ban nhap khong phai la so Armstrong");
	}
	return 0;
}
