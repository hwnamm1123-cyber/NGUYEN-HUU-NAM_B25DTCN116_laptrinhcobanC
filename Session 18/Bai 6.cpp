#include <stdio.h>

int find(int arr[], int target, int size);
int find2(int arr[], int target, int size);

int main(){
	int number[] = {15, 25, 35, 45, 55, 65};
	int size = sizeof(number) / sizeof(number[0]);
	
	int target_value = 45;
	printf("Gia tri can tim: %d\n\n", target_value);
	int found_index = find(number, target_value, size);
	int found_index2 = find2(number, target_value, size);
	
	
	if(found_index != -1){
		printf("Phan tu %d duoc tim thay tai vi tri: %d\n", target_value, found_index2);
    } else {
        printf("Phan tu %d khong duoc tim thay trong mang.\n", target_value);
    }
	
	return 0; 
}

int find(int arr[], int target, int size){
	for (int i = 0; i < size; i++){
		if (arr[i] == target){
			return 1;
		}
	}
	return -1;
}

int find2(int arr[], int target, int size){
	for (int i = 0; i < size; i++){
		if (arr[i] == target){
			return i;
		}
	}
}
