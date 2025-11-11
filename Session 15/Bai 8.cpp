#include <stdio.h>
#include <stdbool.h>
 
int remove_Duplicates(int a[], int n);
void printfArr(int a[], int n);

int main(){
	int a[] = {10, 20, 10, 30, 40, 20, 50, 40, 10};
	int n = sizeof(a) / sizeof (a[0]);
	int newSize = 0;
	
	printf ("--Mang da khai bao---\n");
	printf ("a[] = {10, 20, 10, 30, 40, 20, 50, 40, 10}\n");
	
	newSize = remove_Duplicates(a, n);
	printf ("---Mang sau khi xu li---\n");
	printf ("Kich thuoc mmoi la: %d\n", newSize);
	
	printfArr(a, newSize);
	
	return 0;	
}

int remove_Duplicates(int a[], int n){
	int Next = 0; // vi tri tiep theo 

    for (int i = 0; i < n; i++) {
        bool Duplicate = false; //ban sao 

        for (int j = 0; j < Next; j++) {
            if (a[i] == a[j]) {
                Duplicate = true;
                break;
            }
        }

        if (!Duplicate) {
            a[Next] = a[i];
            Next++; 
        }
    }
    return Next;
}

void printfArr(int a[], int n) { 
    printf(" a[] = {");
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}

