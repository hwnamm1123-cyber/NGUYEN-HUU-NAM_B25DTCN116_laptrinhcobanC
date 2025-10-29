#include <stdio.h>
int main(){
	int i;
	int a[5];
	
	for(i = 0; i < sizeof(a) / sizeof(int); i++){
		printf("Moi ban nhap vao phan tu thu %d trong mang: ", i);
		scanf("%d", &a[i]); 
	}
	
	printf("--CAC PHAN TU TRONG MANG LAN LUOT LA--\n");
	for(i = 0; i < sizeof(a) / sizeof(int); i++){
		printf ("a[%d] = %d \n", i, a[i]);
	}
	return 1;
}
