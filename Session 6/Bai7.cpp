#include <stdio.h>;
int main(){
	int a, b, UCLN; 
	printf ("Moi ban nhap 2 so nguyen duong bat ky\n");
	do{
		printf ("Moi ban nhap so dau tien: ");
		if (scanf("%d", &a) != 1 || a <= 0){
			printf ("Loi nhap lieu");	
			if (a <= 0){ 
			}else {
				while (getchar() != '\n'); 
			} 
		}
	}while (a <= 0);
	
	do{
		printf ("Moi ban nhap vao so thu hai: ");
		if (scanf("%d", &b) != 1 || a <=0){
			printf ("Loi nhap lieu");
			if (b <= 0){
			} else {
				while (getchar() != '\n');
			}
		}
	}while (b <= 0);
	
	int temp_a, temp_b;
	temp_a = a;
    temp_b = b;
    
    while (temp_b != 0) {
        int r = temp_a % temp_b;
        temp_a = temp_b;       
        temp_b = r;            
    }
    UCLN = temp_a;	
    printf("\nUoc chung lon nhat cua %d va %d la: %d\n", a, b, UCLN);
	return 0;
}
