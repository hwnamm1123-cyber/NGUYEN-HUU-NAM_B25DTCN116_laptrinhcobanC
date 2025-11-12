#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_SIZE 100

int main(){
	char a[MAX_SIZE];
	int length;
	
	bool input_valid = false;
	bool visit[MAX_SIZE] = {false};
	
	do{
		printf ("Moi ban nhao bao chuoi bat ky: ");
		if (fgets(a, sizeof(a), stdin) == NULL){
			printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			continue;
		}
		length = strlen(a);
		if (length > 0 && a[length - 1] == '\n'){
			a[length - 1] = '\0';
			length--;
		}
		if (length > 0){
			input_valid = true;
		} else {
			printf ("Chuoi khong duoc de trong, vui long nhap lai !!!\n");
		}
	} while (!input_valid);
	printf("Chuoi ban da nhap la: %s\n", a);
	
	int length2 = strlen(a);
	
	for (int i = 0; i < length2; i++){
		if (visit[i] == true){
			continue;
		}
		int count = 1;
		for (int j = i + 1; j < length2; j++){
			if (a[i] == a[j]){
				count++;
				visit[j] = true;
			}
		}
		printf ("Ky tu %s co so lan xuat hien la: %d", a[i], count);
	}

	return 0;
}
