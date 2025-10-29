#include <stdio.h>
int main(){
	int i;
	int dem = 0;
	int a[5];
	
	for(i = 0; i < sizeof(a) / sizeof(int); i++){
		printf("Moi ban nhap vao phan tu thu %d trong mang: ", i);
		scanf("%d", &a[i]); 
	}
	
	printf ("--CAC PHAN TU LA SO CHAN TRONG MANG LA--\n");
	
	for(i = 0; i < sizeof(a) / sizeof(int); i++){
		if (a[i] % 2 == 0){
			printf ("a[%d] = %d \n", i, a[i]);
			dem++;
		} 
	}
	if (dem++ == 0){
		printf("Mang khong chua so chan");
	}
	
	return 0;
}

