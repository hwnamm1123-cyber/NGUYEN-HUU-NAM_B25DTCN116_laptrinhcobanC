#include <stdio.h>
int main(){
	int a, b;
	int luachon;
	float Ketqua;
   	do{
   		printf ("Moi ban nhap 2 so bat ky \n");
   		printf ("Moi ban nhap vao so dau tien: ");
   		if (scanf("%d", &a) != 1 || a <= 0){
   			printf ("Loi nhap lieu");
		    if (a <= 0){ 
			} else {
				while (getchar() != '\n'); 
			}
		}	
	} while (a <= 0);
	
  	do{
  		printf ("Moi ban nhap vao so thu hai: ");
  		if (scanf("%d", &b) != 1 || b <= 0){
  			printf ("Loi nhap lieu");
		  } if (b <=0){
		  } else {
		  	while (getchar() != '\n');
		  }
	} while (b <= 0);
	  
	do{
		printf("\n--- MENU CHUC NANG ---\n");
	    printf("1.  Tong 2 so\n");
	    printf("2.  Hieu 2 so\n");
	    printf("3.  Tich 2 so\n");
	    printf("4.  Thuong 2 so\n");
	    printf("5.  Thoat\n");
	    printf("Lua chon cua ban (1-5): ");
	    
	    if(scanf("%d", &luachon) !=1 ){
	    	printf ("Loi nhap lieu");
	    	if (luachon <= 0){ 
			} else {
				while (getchar() != '\n'); 
			}
			luachon = 0;
			continue; // quay lai menu vong lap
		}	
		
    switch (luachon){
    	case 1:
    		Ketqua = a + b;
    		printf ("Ket qua: %.2f + %.2f = %.2f\n", a, b, Ketqua);
            break;
        case 2:
        	Ketqua = a - b;
            printf ("Ket qua: %.2f - %.2f = %.2f\n", a, b, Ketqua);
            break;
        case 3:
        	Ketqua = a * b;
            printf ("Ket qua: %.2f * %.2f = %.2f\n", a, b, Ketqua);
            break;
        case 4:
            if (b == 0) {
            printf ("Loi: Khong the chia cho 0.\n");
            } else {
            	Ketqua = a /b;
           		printf ("Ket qua: %.2f / %.2f = %.2f\n", a, b, Ketqua);
            }
            break;
        case 5:
                printf ("--- Thoat chuong trinh. Tam biet! ---\n");
                break;
        default:
        	printf ("Lua chon khong co trong menu (Vui long chon 1-5).\n");
            break;
    }
    } while (luachon != 5);
	return 0;
}


