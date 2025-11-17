#include <stdio.h>
#include <stdbool.h>

#define MAX 100

void clear_input();
int find_max(int *arr, int n);
void input_arr(int *arr, int *n);

int main(){
	int arr[MAX];
	int n = 0;
	
	input_arr(arr, &n);
	
	int max_value = find_max(arr, n);

    printf("Phan tu lon nhat trong mang la: %d\n", max_value);
    
    return 0;
}

void clear_input(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void input_arr(int *arr, int *n){
    int size_input;
    
    do {
        printf("Nhap so luong phan tu cua mang: ");
        if (scanf("%d", &size_input) != 1 || size_input <= 0 || size_input > MAX){
            printf("Loi nhap lieu\n");
            clear_input();
        } else {
            clear_input();
            break;
        }
    } while (1);

    *n = size_input;
    
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < *n; i++) {
        do {
            printf("arr[%d]: ", i);
            if (scanf("%d", arr + i) != 1){ 
                printf("Loi nhap lieu, vui long nhap lai.\n");
                clear_input();
            } else {
                clear_input();
                break;
            }
        } while (1);
    }
}

int find_max(int *arr, int n){
    int max_val = *arr;
    int *current_ptr = arr + 1;
    int *end_ptr = arr + n;
    while (current_ptr < end_ptr) {
        if (*current_ptr > max_val) {
            max_val = *current_ptr;
        }
        current_ptr++;
    }
    return max_val;
}
    
