#include <stdio.h>
int main(){
	int luachon;
	int a,b,c;
	do{
		printf("\n--- MENU CHUC NANG ---\n");
	    printf("1. Nhap 3 so nguyen\n");
	    printf("2. Tong 3 so\n");	
	    printf("3. Trung binh cong 3 so\n");
	    printf("4. So nho nhat\n");
	    printf("5. So lon nhat\n");
	    printf("6. Thoat\n");
	    printf("Lua chon cua ban: ");
	    scanf("%d", &luachon);
	    
	    switch(luachon){
	    	case 1:
				printf ("Moi ban nhap vao 3 so nguyen bat ky\n");
				printf ("So nguyen dau tien la: ");
				scanf ("%d", &a);
				printf ("So nguyen thu hai la: ");
				scanf ("%d", &b);
				printf ("So nguyen thu ba la: ");
				scanf ("%d", &c);
				break;   
            case 2:
            	printf ("Tong ba so la: %d",a + b + c);
                break;
			case 3:
				printf("Trung binh la: %d",(float) (a+b+c)/3);
				break;
			case 4:
				if (a!=0 && b!=0 && c!=0){
					int Min = a;
					if(Min>b) Min=b;
					if(Min>c) Min=c;
					printf("So nho nhat la: %d",Min);
					break;
				}else{
					break;
				}
			case 5:
				if (a!=0 && b!=0 && c!=0){
					int Max=a;
					if(Max<b) Max=b;
					if(Max<c) Max=c;
					printf("So lon nhat la: %d",Max);
					break;
			    }else{
			    	break;
				}
			case 6:
				printf("Thoat chuong trinh\n");
				break;
			default:
				printf("So nhap khong hop le\n");			
		}

	}while(luachon != 6);
	return 0;
}
