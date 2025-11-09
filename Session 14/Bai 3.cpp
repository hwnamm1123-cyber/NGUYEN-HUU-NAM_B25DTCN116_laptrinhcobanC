#include <stdio.h>

long long tinhgiaithua(int n);

int main(){
	int number = 12;
	long long result;
	
	result = tinhgiaithua(number);
	
	if (number < 0){
		printf ("Giai thua khong xac dinh so am! \n");
	} else {
		printf ("Giai thua cua %d (%d!) la: %lld \n", number, number, result); 
	}
	
	return 0;
}

long long tinhgiaithua(int n){
	if (n < 0){
		return 0; // tra ket qua ve 0 de ham main xu ly
	}     
	if (n == 0 || n == 1){
		return 1;
	}
	
	//xu li thuat toan giai thua
	long long result2 = 1;
	for (int i = 2; i < n; i++){  //  test ket qua voi n > 20 se bi tran so 
		result2 *= i;
	}
	return result2;
}
