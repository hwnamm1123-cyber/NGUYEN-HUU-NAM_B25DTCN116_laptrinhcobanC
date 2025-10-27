#include <stdio.h>
int main(){
    int number, a, result = 0;
    printf ("Moi ban nhap vao so nguyen bat ky: "); // vi du nhap so 1234
    if (scanf("%d", &number) != 1){
    	printf ("Loi nhap lieu");
    	return 1;
	}
	
	if (number == 0) {
        printf("So dao nguoc la: 0\n");  // => cho truong hop so nhap vao la 0 
        return 0;
    }
   
    do{
    	a = number % 10;                //  dong 16-18 cong thuc tinh so dao nguoc  
    	number = number / 10;
    	result = result * 10 + a;
	} while (number != 0);              // vong lap se ket thuc khi number = 0 
	printf ("So dao nguoc la: %d", result);
	return 0; 
}

