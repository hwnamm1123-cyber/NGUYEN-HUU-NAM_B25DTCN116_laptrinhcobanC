#include <stdio.h>
int main(){
	int n, i;
	long long ketqua;
	
	printf ("Moi ban nhap vao so nguyen duong n: ");
	if (scanf("%d", &n) != 1 || n < 0){
		printf ("Loi nhap lieu");
		return 1;
	}
	
	for (int i = 1; i <= n; i++){
		ketqua *= i;
	}
	printf("Ket qua la: %d! = %lld\n", n, ketqua);
	return 0;
}
