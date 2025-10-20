#include <stdio.h>
#include <math.h>
int main(){
	int So_nguyen_4_chu_so;  // vi du gia tri so nhap vao la 1234 
	int result = 0, a, b;  // khai bao bien ket qua va so tinh toan 
	printf ("Moi ban nhap vao so nguyen co 4 chu so: ");
	scanf ("%d", &So_nguyen_4_chu_so); // nhap gia tri cua so 4 chu so tu ban phim 
    a = So_nguyen_4_chu_so % 10; // tinh so dao nguoc dau tien, a = 4 (phep chia lay du) 
    b = So_nguyen_4_chu_so / 10; // ket qua bang 123 
    result = result * 10 + a; // gia tri cua ket qua lan 1, o day khai bao lan dau cho gia tri cua ket qua = 0 => = 4 
    a = b % 10; // = 3 
    b = b / 10; // = 12 
    result = result * 10 + a; // ket qua lan 2, =43 
    a = b % 10; // = 2 
    b = b / 10; // 1 
    result = result * 10 + a; // ket qua lan 3, =432 
    a = b % 10; //=1 
    b = b / 10; //=0 
    result = result * 10 + a; //ket qua lan 4, =4321 
    printf ("So nghich dao cua so da nhap la: %d", result); //in ket qua lan 4 ra man hinh  
    return 0; 
} 
 
