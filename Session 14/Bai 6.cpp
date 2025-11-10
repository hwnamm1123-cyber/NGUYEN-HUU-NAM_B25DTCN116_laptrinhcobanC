#include <stdio.h>
#include <stdbool.h>

bool check_perfectNumber(int n);

int main(){
	int number1, number2;
	
	do{
		printf ("Moi ban nhap vao so nguyen dau tien:  ");
		if(scanf("%d", &number1) != 1 || number1 < 0){
			printf ("Loi nhap lieu, vui long nhap lai!!");
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			continue;
		}
		int c;
		while ((c = getchar()) != '\n' && c != EOF);
		break;
	} while (1);
	
	do{
		printf ("Moi ban nhap vao so nguyen dau tien:  ");
		if(scanf("%d", &number2) != 1 || number2 < 0){
			printf ("Loi nhap lieu, vui long nhap lai!!");
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			continue;
		}
		int c;
		while ((c = getchar()) != '\n' && c != EOF);
		break;
	} while (1);
	
	printf ("\n-----KET QUA-----\n");
	
	//Goi ham va in ket qua cho so thu nhat
	printf ("So %d: %s so hoan hao.\n", number1, check_perfectNumber(number1) ? "la" : "khong phai la");
	//Goi ham lan 2
	printf ("So %d: %s so hoan hao.\n", number2, check_perfectNumber(number2) ? "la" : "khong phai la");
	
	return 0;
}

bool check_perfectNumber(int n){
	if (n <= 1){
		return false;
	} 
	long long sum = 1; //1 luon la uoc 
	for (int i = 2; i * i <= n; i++){
		if (n % i == 0){
			sum += i;
			if (i != n / i){
				sum += (n / i);
			}
		}
	}
	
	if (sum == n){
		return true;
	} else {
		return false;
	}
} 

