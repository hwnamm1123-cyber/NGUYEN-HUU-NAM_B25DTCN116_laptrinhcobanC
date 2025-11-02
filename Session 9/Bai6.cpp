#include <stdio.h>
int main(){
	int a[] = {10, 20, 30, 40, 50};
	int Sum = 0; 
	float Average; 
	
	//tinh gia tri cua n (So phan tu cua mag) de tinh duoc so lan lap for
	int n = sizeof(a) / sizeof(a[0]); 
	
	//su dung vong lap for de tinh tong tung gia tri cua mang
	for (int i = 0; i < n; i++){
		Sum += a[i];
	} 
	
	Average = (float)Sum / n;
	
	printf ("--KET QUA TINH TOAN--\n");
	printf ("Mang da cho la: {10, 20, 30, 40, 50}\n");
	printf ("Tring binh cua cac phan tu trong mang la: %.2f", Average);
	
	return 0; 
} 
