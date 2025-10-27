#include <stdio.h>
int main(){
	int n; 
	do {
		printf ("Moi ban nhap vao so bat ki: ");
		if(scanf("%d", &n) != 1){
			printf ("Loi nhap lieu");
		while(getchar() != '\n');
			n = 0; // dat n = 0 de vong lap tiep tuc khi nhap sai
		continue;
		} 
	} while ( n != 7); 
		printf ("Chuc mung ban da doan dung!");
	return 0;
}	
