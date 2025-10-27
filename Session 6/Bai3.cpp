#include <stdio.h>
int main(){
	int n, i;
	long long Sum = 0; //dat gia tri ban dau cua Sum = 0 de tranh sai ket qua
	do{
		printf("Moi ban nhap vao 1 so nguyen duong n: ");
		if (scanf("%d", &n) != 1 || n <= 0){
			printf("Loi nhap lieu");
			if (n <= 0){ //neu n <= 0 thi se nhap lai
			} else {
				while (getchar() != '\n'); //neu nhap sai dinh dang => xoa bo nho dem va nhap lai
			}
		}	
	} while (n <= 0); //lap lai khi n chua hop le
	for (i=1; i <= n; i++){
		Sum += i; 
	}
	printf ("\nTong cac so nguyen duong tu 1 den %d la: %lld", n, Sum);
	return 0;
}
