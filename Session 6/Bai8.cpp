#include <stdio.h>;
int main(){
	int a, b, UCLN, BCNN; 
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
  	BCNN = (long long)a * b / UCLN;
  	printf("Boi chung nho nhat (BCNN) cua %d va %d la: %lld\n", a, b, BCNN);
	return 0;
}
