#include <stdio.h>
int main(){
	int a, b;
	int choice;
	float result;
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
	    
	    if(scanf("%d", &choice) !=1 ){
	    	printf ("Loi nhap lieu");
	    	if (choice <= 0){ 
			} else {
				while (getchar() != '\n'); 
			}
			choice = 0;
			continue; // quay lai menu vong lap
		}	
		
    switch (choice){
    	case 1:
    		result = a + b;
    		printf ("Ket qua: %.2f + %.2f = %.2f\n", a, b, result);
            break;
        case 2:
        	result = a - b;
            printf ("Ket qua: %.2f - %.2f = %.2f\n", a, b, result);
            break;
        case 3:
        	result = a * b;
            printf ("Ket qua: %.2f * %.2f = %.2f\n", a, b, result);
            break;
        case 4:
            if (b == 0) {
            printf ("Loi: Khong the chia cho 0.\n");
            } else {
            	result = a /b;
           		printf ("Ket qua: %.2f / %.2f = %.2f\n", a, b, result);
            }
            break;
        case 5:
                printf ("--- Thoat chuong trinh. Tam biet! ---\n");
                break;
        default:
        	printf ("Lua chon khong co trong menu (Vui long chon 1-5).\n");
            break;
    }
    } while (choice != 5);
	return 0;
}


