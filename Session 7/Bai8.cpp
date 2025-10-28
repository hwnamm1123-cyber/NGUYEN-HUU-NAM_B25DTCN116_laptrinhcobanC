#include <stdio.h>
int main(){
	long long n;
	int x, tempN;
	int Dem = 0; //vi tinh chat cua bai toan can su dung de dem so lan xuat hien cua x trong n nen khai bao Dem de dem so lan.
	
	printf ("Moi ban nhap vao so N: ");
	if (scanf("%lld", &n) != 1 || n <= 0){
		printf ("Loi nhap lieu.");
		return 1;
	}
	
	do{
		printf ("Moi bban nhap so x (0-9): ");
		if (scanf("%d", &x) != 1){
			printf ("Loi nhap lieu.");
			int c;
			while ((c = getchar()) != '\n' && c != EOF); //giai thich cho dong nay: neu ki tu c nhap vao khac xuong dong  && EOF  => dung lai vong lap khi gap \n => Dam bao chuong trinh khong bi ket 
			    // c = getchar dung de doc ki tu
			x = -1; 
			continue;
		} if (x < 0 || x > 9){  // nen dat dieu kien if trung voi dieu kien cua do while de tranh bi loi in man hinh
			printf ("Vui long nhap vao so (0-9)");
		}
	} while (x < 0 || x > 9);
	
	
	if (n < 0){
        tempN = -n;
    } else {
        tempN = n;
    } 
	//giai thich tu dong 28 den 32 =>d dat cho gia tri cua n am hoac duong 

    if (tempN == 0) {
        if (x == 0) {
            Dem = 1; // truong hop cho so 0 
        } 
    } else {
        while (tempN > 0) {
            int chuSoCuoi = tempN % 10;
            
            if (chuSoCuoi == x) {
                Dem++;
            }
            tempN /= 10;
        }
    } // su dung vong lap de tach tung chu so
    
    printf("\n--- KET QUA ---\n");
    printf("Chu so %d xuat hien %d lan trong so %lld.\n", x, Dem, n); 
    
	return 0;
}

