#include <stdio.h>
int main(){
	int i, j, n, m;
	
	printf ("Moi ban nhap vao chieu dai cua hinh chu nhat: ");
	if (scanf("%d", &n) != 1 || n <= 0){
		printf ("Loi nhap lieu");
		return 1;
	}
	printf ("Moi ban nhap vao chieu rong cua hinh chu nhat: ");
	if (scanf("%d", &m) != 1 || m <= 0){
		printf ("Loi nhap lieu");
		return 1;
	}
	
	for (i = 1; i <= n; i++){
		for (j = 1; j <= m; j++){ //for 2
			printf ("*"); // printf cua for 2
		} 
		printf ("\n");
	} 
	return 0;
}
