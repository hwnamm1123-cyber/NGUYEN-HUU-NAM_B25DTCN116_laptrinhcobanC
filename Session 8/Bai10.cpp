#include <stdio.h>
int main(){
	int n; 
	int dem = 0; // khai bao them 1 bien dem de dem so nguyen to co trong mang, neu = 0 => ko co so nguyen to
	
	//buoc 1 moi nguoi dung nhap vao so phan tu cua mang
	printf("--NHAP GIA TRI CHO MANG--\n");
	do{
		printf("Moi ban nhap vao so phan tu cua mang: ");
		if(scanf("%d", &n) != 1 || n <= 0){
			printf("Loi nhap lieu.");
			int c;
			while((c = getchar()) != '\n' && c != EOF);
			continue;
		}
		int c;
		while((c = getchar()) != '\n' && c != EOF);
	} while (n <= 0);
	
	int a[n];
	//su dung vong lap for de lap nhap lan luot cac gia tri cua phan tu
	for(int i = 0; i < n; i++){
		do{
			printf("Moi ban nhap vao gia tri a[%d]: ", i);
			if (scanf("%d", &a[i]) != 1){
				printf("Loi nhap lieu");
				int c;
				while((c = getchar()) != '\n' && c != EOF);
				continue;
			}  
			int c;
			while((c = getchar()) != '\n' && c != EOF);
			break; // su dung break de thoat ra khoi vong lap sau khi hop le
		} while (1); // vong lap se chay lai khi scanf loi
	}
	
	//in ra cac phan tu la so nguyen to trong mang
	printf("--CAC PHAN TU LA SO NGUYEN TO TRONG MANG LA--\n");
	//su dung vong lap for de duyet qua tung phan tu cua mang

	for(int i = 0; i < n; i++){ // duyet cac phan tu cua mang
		int num = a[i];
	        int SNT = 1; 
	        if (num <= 1){ 
	            SNT = 0; // 0 va 1 khong phai SNT 
	        } else {
	            for (int j = 2; j * j <= num; j++){
	                if (num % j == 0){ //neu mun thoa man dk nay => ko phai SNT 
	                    SNT = 0; 
	                    break; 
	                }
	            }
	        }
	   
		if (SNT == 1){ //loc ra cac so khong thoa man cac dieu kien sai o tren => cac truong hop tren se dat co SNT ve 1 vaf thuc hien dong lenh if
			printf ("a[%d] = %d\n", i, a[i]);
			dem++;
		}
	}
	
	if (dem == 0){
		printf ("\nKhong co so nguyen to trong mang.\n");
	} else {
		printf ("\nCo tong %d so nguyen to trong mang.\n", dem);
	}
	
	return 0;
	
}
