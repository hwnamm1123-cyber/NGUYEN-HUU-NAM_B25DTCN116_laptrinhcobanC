#include <stdio.h>
int main(){
	int i;
	int a[5];
	int So_phan_tu = 5; // khai bao so phan tu cho ro rang
	
	for(i = 0; i < sizeof(a) / sizeof(int); i++){
		printf("Moi ban nhap vao phan tu thu %d trong mang: ", i);
		scanf("%d", &a[i]); 
	}
	
	for(i = 0; i < So_phan_tu; i++){ // dat i = 0 khi bat dau dung lai khi so phan tu =4
		if(a[i] % 2 == 0){ //so chan +3
			a[i] += 3;
		} else { // so le +2
			a[i] += 2;
		}
	}
	
	printf("\nMang moi sau khi thay doi la:\n");
	for(i = 0; i < So_phan_tu; i++){ // dat i = 0 khi bat dau dung lai khi so phan tu =4
		printf ("\na[%d] = %d", i, a[i]);
	}
	
	return 0;
}
