#include <stdio.h>

//khai bao khoi sap xep
void bubbleSort(int a[], int n){ // khoi nay so xay va hoan doi 2 ptu lien  ke 
	int i, j , temp;
	for(i = 0; i < n; i++){
		for(j = 0; j < n ; j++){
			if (a[j] > a[j + 1]){ //neu thi se duoc hoan doi va dua no noi len cuoi mang
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			} 
		} 
	} 
}

//khoi de tim kiem 
int binarySearch(int a[], int l, int r, int x){
	while (l <= r){
		//tinh chi so o giua
		int mid = l + (r - l) / 2;
		if (a[mid] == x) 
			return mid; 
		if (a[mid] < x)
			l = mid + 1;	
		else
            r = mid - 1;
    }
    return -1;	
}

//khoi de in ra man hinh 
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
	int a[] = {1,2,4,5,3,8,9};
	int n = sizeof(a) / sizeof (a[0]);
	int value_search; //so can tim kiem
	int result;
	
	printf ("Mang ban dau da nhap la: ");
	printArray(a, n);
	
	bubbleSort(a, n); //can sap xep truoc khi in ra man hinh
	printf ("Mnag sau khi sap xep tang dan la: ");
	printArray(a, n);
	
	int flag = 0; 
	do{
		printf ("Moi ban nhap vao 1 so nguyen bat ky: ");
		if (scanf("%d", &value_search) != 1){
			printf ("Loi nhap lieu\n");
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			flag = 0; //khong thanh cong
		} else {
			flag = 1; //dat bien co thanh cong
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
		} 
	} while (value_search == 0);
	
	result = binarySearch (a, 0, n -1, value_search);
	
	if (result != -1){
		printf ("Tim thay phan tu %d tai vi tri: %d", value_search, result);
	} else {
		printf ("Khong tim thay phan tu ban da nhap");
	}
	
	return 0;
}
