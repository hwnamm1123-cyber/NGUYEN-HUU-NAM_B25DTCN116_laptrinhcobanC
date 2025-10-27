#include <stdio.h>
int main() {
    int a, b, c, tele;
    printf ("Moi ban nhap vao so nguyen thu nhat (a): ");
    scanf("%d", &a);
    printf ("Moi ban nhap vao so nguyen thu nhat (b): ");
    scanf("%d", &b);
    printf ("Moi ban nhap vao so nguyen thu nhat (c): ");
    scanf("%d", &c);
    
    if (a > b) {
        tele = a;
        a = b;
        b = tele;
    }
  
    if (a > c) {
        tele = a;
        a = c;
        c = tele;
    }
   
    if (b > c) {
        tele = b;
        b = c;
        c = tele;
    }
    
    printf("Thu tu tang dan: %d %d %d", a, b, c);

    return 0;
}
    
    
