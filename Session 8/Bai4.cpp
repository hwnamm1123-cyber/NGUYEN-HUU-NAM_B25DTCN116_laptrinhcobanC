#include <stdio.h>
int main(){
	int n;
	
	printf("Moi ban nhap vao so phan tu cua mang: ");
	if(scanf("%d", &n) != 1 || n <= 0){
		printf ("Loi nhap lieu");
		return 1;
	}
	
	int a[n];
	
	for(int i = 0; i < sizeof(a) / sizeof(int); i++){
		printf("Moi ban nhap vao phan tu thu %d trong mang: ", i);
		scanf("%d", &a[i]); 
	}
	
	return 0;
}
