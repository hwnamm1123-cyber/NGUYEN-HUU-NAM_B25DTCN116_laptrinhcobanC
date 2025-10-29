#include <stdio.h>
int main(){
	int n;
	do{
		printf ("Moi ban nhap vao so phan tu cua mang: ");
		
		if(scanf("%d", &n) != 1 || n <= 0){
			printf ("\nLoi nhap lieu vui long nhap so nguyen duong");
			
			int c;
			while((c = getchar()) != '\n' && c != EOF);
			continue;
		}
		int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
	} while (n <= 0);
	
	int a[n];
	
	printf("--Moi ban nhap vao cac phan tu--\n");
	
	for(int i = 0; i < n; i++){
		do{
			printf("Moi ban nhap vao so phan tu %d trong mang: ", i);
			
			if(scanf("%d", &a[i]) != 1){
				printf ("\nVui long nhap vao mot so nguyen");
				
				int c;
				while ((c = getchar()) != '\n' && c != EOF);
				continue;
			}
			
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			
			if(a[i] % 2 == 0){
				printf("\nKhong hop le, vui long nhap vao so le");
			}
		} while (a[i] % 2 == 0);
	}
	
	printf ("\n--Mang da nhap thanh cong--");
	
	for(int i = 0; i < n; i++){
		printf ("\na[%d] = %d", i, a[i]);
	}
	
	return 0;
}

