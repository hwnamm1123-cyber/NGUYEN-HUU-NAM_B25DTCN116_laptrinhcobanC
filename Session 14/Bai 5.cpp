#include <stdio.h>
#include <stdbool.h> // thu vien de su dung ham kieu bool, true, fale.

bool check_primeNumber (int n);

int main(){
	int number1 = 23; //SNT
	int number2 = 9; //ko pahi SNT
	
	printf ("Ket qua kiem tra so %d: %s", number1, check_primeNumber ? "True" : "False"); //su dung %s 
	printf ("\n");
	printf ("Ket qua kiem tra so %d: %s", number2, check_primeNumber ? "True" : "False"); 
	
	return 0;
} 

bool check_primeNumber (int n){
	if (n <= 1){
		return false; // khong phai SNT
	}
	if (n <= 3){
		return true; //la SNT
	}
	
	//loai bo cac so co boi la 2 va 3
	if (n % 2 == 0 || n % 3 == 0){
		return false; // khong phai so nguyen to 
	}
	
	for (int i = 5; i * i < n; i = i + 6){  //thay vi viet i++ ta +6 de toi uu code khi chay voi cac so lon
 		if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
	}
	
	//nue khong tim thay uoc nao thi do la so nguyen to
	return true;
}
