#include <stdio.h>

int timUCLN(int a, int b);

int main(){
	int number1, number2, result;
	
	do{
		printf ("Moi ban nhap vao so dau tien: ");
		if(scanf("%d", &number1) != 1 || number1 < 0){
			printf ("Loi nhap lieu, vui long nhao lai !!!\n");
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			continue;
		}
		int c;
		while ((c = getchar()) != '\n' && c != EOF);
		break;
	} while (1);
	
	do{
		printf ("Moi ban nhap vao so thu hai: ");
		if(scanf("%d", &number2) != 1 || number2 < 0){
			printf ("Loi nhap lieu, vui long nhao lai !!!\n");
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			continue;
		}
		int c;
		while ((c = getchar()) != '\n' && c != EOF);
		break;
	} while (1);
	
	result = timUCLN(number1, number2);
	printf ("Uoc chung lon nhat cua %d va %d la: %d", number1, number2, result);
	
	return 0;
}

int timUCLN(int a, int b){
	if (a == 0) return b;
    if (b == 0) return a;
    
    while (b != 0) {
        int temp = b; 
        b = a % b;    
        a = temp; 
    }
    return a;
}
