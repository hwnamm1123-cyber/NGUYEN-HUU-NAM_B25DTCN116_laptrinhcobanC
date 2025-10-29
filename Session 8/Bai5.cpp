#include <stdio.h>
int main(){
	int i;
	int a[5];
	
	for(i = 0; i < sizeof(a) / sizeof(int); i++){
		printf("Moi ban nhap vao phan tu thu %d trong mang: ", i);
		scanf("%d", &a[i]); 
	}
	
	int min = a[0];
	int max = a[0];
	
	for(int i = 1; i < 5; i++){
		if(a[i] > max){
			max = a[i];
		}
		if(a[i] < min){
			min = a[i];
		}
	} 
	
	printf ("PHAN TU LON NHAT TRONG MANG LA: %d\n", max);
	printf ("PHAN TU NHO NHAT TRONG MANG LA: %d\n", min);
	
	return 0;
}
