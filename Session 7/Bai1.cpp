#include <stdio.h>
int main(){
	int n, i, SoChan = 0, SoLe = 0; 
	
	printf ("Moi ban nhap vao so nguyen n: "); // nhap vao 1234
	if (scanf("%d", &n) != 1 || (n < 0)){
		printf ("Loi nhap lieu");
		return 1;
	}
	
	for (i = 1; i <= n; i++){
		if (i % 2 == 0){
			SoChan++;
		} else {
			SoLe++;
		}
	}
	
	printf("\n--- KET QUA ---\n");
    printf("So nguyen da nhap: %d\n", n);
    printf("Tong so luong chu so CHAN la: %d\n", SoChan);
    printf("Tong so luong chu so LE la: %d\n", SoLe);
    return 0;
} 
