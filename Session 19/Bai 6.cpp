#include <stdio.h>
#define MAX 100

void clear_input();
void input_arr(int *arr, int *n, char name);
void print_arr(const int *arr, int n, char name);
void copyArray(const int *src, int *dest, int n);

int main(){
	int A[MAX];
    int B[MAX];
    int size = 0;
    
	input_arr(A, &size, 'A');
	copyArray(A, B, size);
	
	printf("\n---KET QUA SAO CHEP---\n");
    print_arr(A, size, 'A'); 
    print_arr(B, size, 'B');
    
    return 0;
}

void clear_input() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


void input_arr(int *arr, int *n, char name) {
    int size_input;
    
    do {
        printf("Nhap so luong phan tu cua mang %c: ", name);
        if (scanf("%d", &size_input) != 1 || size_input < 0 || size_input > MAX) {
            printf("Loi nhap lieu. Vui long nhap so nguyen duong tu 1 den %d.\n", MAX);
            clear_input();
        } else {
            clear_input();
            break;
        }
    } while (1);

    *n = size_input; 
    
    printf("Nhap cac phan tu cua mang %c:\n", name);
    for (int i = 0; i < *n; i++) {
        do {
            printf(" %c[%d]: ", name, i);
            if (scanf("%d", arr + i) != 1) { 
                printf(" Loi nhap lieu, vui long nhap lai.\n");
                clear_input();
            } else {
                clear_input();
                break;
            }
        } while (1);
    }
}

void copyArray(const int *src, int *dest, int n){
    const int *src_ptr = src;
    int *dest_ptr = dest;
    const int *end_ptr = src + n;
    while (src_ptr < end_ptr) {
        *dest_ptr = *src_ptr; 
        src_ptr++; 
        dest_ptr++;
    }
}

void print_arr(const int *arr, int n, char name) {
    printf("Mang %c: { ", name);
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf(" }\n");
}
