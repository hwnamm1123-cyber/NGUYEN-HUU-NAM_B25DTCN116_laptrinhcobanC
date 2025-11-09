#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100
void clearInput();
void hienthiMenu();
void hienthiMenuSapxep();
void hienthiMenuTimkiem();

void InputArr(int a[], int *n);
void printfArr(int a[], int n);
void Insert(int a[], int *n);
void Update(int a[], int n);
void Delete(int a[], int *n);
void choice_sapxep(int a[], int n);
void SapxepTangdan(int a[], int n);
void SapxepGiamdan(int a[], int n);
void choice_timkiem(int a[], int n);

int main(){
	int a[MAX_SIZE];
	int n = 0;
	int choice, choice1, choice2;
	
	do{
		hienthiMenu();
		do{
			printf("Moi ban nhap vao chuc nang muon thuc hien: ");
			if (scanf("%d", &choice) != 1 || choice < 0 || choice > 8){
				printf("Loi nhap lieu, vui long lua chpn lai !!!");
				clearInput();
				continue;
			}
			clearInput();
			break;
		} while (1);
		
		switch (choice){
			case 1: InputArr(a, &n);
			break;
			case 2: printfArr(a, n);
			break;
			case 3: Insert(a, &n);
			break;
			case 4: Update(a, n);
			break;
			case 5: Delete(a, &n);
			break;
			case 6: choice_sapxep(a, n);
			break;
			case 7: choice_timkiem(a, n);
			break;
			case 8:
				printf ("Thoat chuong trinh !!!\n");
			break;
			default:
				break;
		}
	} while (1);
	return 0;
}

void clearInput(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void hienthiMenu(){
    printf("\n+------------------ MENU CHUC NANG ----------------------+\n");
    printf("|1. Nhap so phan tu can nhap va gia tri cac phan tu      |\n");
    printf("|2. In ra gia tri cac phan tu dang quan ly               |\n");
    printf("|3. Them mot phan tu vao vi tri chi dinh                 |\n");
    printf("|4. Sua mot phan tu o vi tri chi dinh                    |\n");
    printf("|5. Xoa mot phan tu o vi tri chi dinh                    |\n");
    printf("|6. Sap xep cac phan tu                                  |\n");
    printf("|7. Tim kiem phan tu nhap vao                            |\n");
    printf("|8. Thoat                                                |\n");
    printf("+--------------------------------------------------------+\n");
}

void hienthiMenuSapxep(){
    printf("\n+-------- MENU SAP XEP --------+\n");
    printf("|a. Giam dan                   |\n");
    printf("|b. Tang dan                   |\n");
    printf("|c. Quay lai Menu chinh        |\n");
	printf("+------------------------------+\n");
}

void hienthiMenuTimkiem(){
    printf("\n+------ MENU TIM KIEM ------+\n");
    printf("|a. Tim kiem tuyen tinh     |\n");
    printf("|b. Tim kiem nhi phan       |\n");
    printf("|c. Quay lai Menu chinh     |\n");
    printf ("+--------------------------+\n");
    
}

void SapxepTangdan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++){
            if (arr[j] > arr[j + 1]){ 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void SapxepGiamdan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++){
            if (arr[j] < arr[j + 1]){ 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void InputArr(int arr[], int *n){
    int new_n;
    do {
        printf("Nhap so luong phan tu N: ");
        if (scanf("%d", &new_n) != 1 || new_n < 1 || new_n > MAX_SIZE){
            printf("Loi: Vui long nhap so nguyen hop le.\n");
            clearInput();
            continue;
        }
        clearInput();
        break;
    } while (1);

    *n = new_n;
    printf("--- NHAP GIA TRI CAC PHAN TU ---\n");
    for (int i = 0; i < *n; i++){
        do {
            printf("Nhap A[%d]: ", i);
            if (scanf("%d", &arr[i]) != 1) {
                printf("Vui long nhap so nguyen.\n");
                clearInput();
                continue;
            }
            clearInput();
            break;
        } while (1);
    }
}

void printfArr(int arr[], int n){
    printf("\n--- MANG DANG QUAN LY ---\n");
    printf("Index: ");
    for (int i = 0; i < n; i++){
        printf("%5d", i);
    }
    printf("\nValue: ");
    for (int i = 0; i < n; i++){
        printf("%5d", arr[i]);
    }
    printf("\n");
}

void Insert(int arr[], int *n) {
    if (*n >= MAX_SIZE) {
        printf("Mang da day. Khong the them.\n");
        return;
    }

    int pos, value;

    do {
        printf("Nhap gia tri can them: ");
        if (scanf("%d", &value) != 1) {
            printf("Vui long nhap so nguyen.\n");
            clearInput();
            continue;
        }
        clearInput();
        break;
    } while (1);

    do {
        printf("Nhap vi tri chen (0 den %d): ", *n);
        if (scanf("%d", &pos) != 1 || pos < 0 || pos > *n){
            printf("Vui long nhap vi tri hop le.\n");
            clearInput();
            continue;
        }
        clearInput();
        break;
    } while (1);
    
    for (int i = *n; i > pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*n)++;
}

void Update(int arr[], int n){
    int pos, value;

    do {
        printf("Nhap vi tri can sua (0 den %d): ", n - 1);
        if (scanf("%d", &pos) != 1 || pos < 0 || pos >= n){
            printf("Vui long nhap vi tri hop le.\n");
            clearInput();
            continue;
        }
        clearInput();
        break;
    } while (1);

    do {
        printf("Nhap gia tri moi cho A[%d]: ", arr[pos]);
        if (scanf("%d", &value) != 1) {
            printf("Vui long nhap so nguyen.\n");
            clearInput();
            continue;
        }
        clearInput();
        break;
    } while (1);

    arr[pos] = value;
    printf("Da cap nhat A[%d] thanh %d.\n", pos, value);
}

void Delete(int arr[], int *n){
    int pos, deleted_value;

    do {
        printf("Nhap vi tri can xoa (0 den %d): ", *n - 1);
        if (scanf("%d", &pos) != 1 || pos < 0 || pos >= *n) {
            printf("Vui long nhap vi tri hop le.\n");
            clearInput();
            continue;
        }
        clearInput();
        break;
    } while (1);

    deleted_value = arr[pos];

    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
    printf("Da xoa phan tu %d o vi tri %d. Kich thuoc moi N = %d.\n", deleted_value, pos, *n);
}

void choice_sapxep(int arr[], int n) {
    char sub_choice;
    do {
        hienthiMenuSapxep();
        printf("Chon phuong thuc sap xep (a, b, c): ");
        if (scanf(" %c", &sub_choice) != 1) {
            sub_choice = ' ';
        }
        clearInput();

        if (sub_choice == 'a' || sub_choice == 'A') {
            SapxepTangdan(arr, n); 
            printf("Da sap xep Giam dan.\n");
            printfArr(arr, n);
            break;
        } else if (sub_choice == 'b' || sub_choice == 'B') {
            SapxepGiamdan(arr, n); 
            printf("Da sap xep Tang dan.\n");
            printfArr(arr, n);
            break;
        } else if (sub_choice == 'c' || sub_choice == 'C') {
            break;
        } else {
            printf("Lua chon khong hop le.\n");
        }
    } while (1);
}

void choice_timkiem(int arr[], int n) {
    char sub_choice;
    int target;

    do {
        printf("Nhap gia tri can tim kiem: ");
        if (scanf("%d", &target) != 1) {
            printf("Loi: Vui long nhap so nguyen.\n");
            clearInput();
            continue;
        }
        clearInput();
        break;
    } while (1);

    do {
        hienthiMenuTimkiem();
        printf("Chon phuong thuc tim kiem (a, b, c): ");
        if (scanf(" %c", &sub_choice) != 1) {
            sub_choice = ' ';
        }
        clearInput();

        if (sub_choice == 'a' || sub_choice == 'A'){
            int index = -1;
            for (int i = 0; i < n; i++){
                if (arr[i] == target){
                    index = i;
                    break;
                }
            }
            if (index != -1) {
                printf("Tim thay %d tai vi tri %d.\n", target, index);
            } else {
                printf("Khong tim thay %d trong mang.\n", target);
            }
            break;
        } else if (sub_choice == 'b' || sub_choice == 'B'){
            printf("De tim kiem nhi phan hieu qua, mang nen duoc sap xep truoc (Tang dan).\n");
            
            int low = 0;
            int high = n - 1;
            int index = -1;
            
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (arr[mid] == target) {
                    index = mid;
                    break;
                } else if (arr[mid] < target){
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            if (index != -1) {
                printf("Tim thay %d tai vi tri %d.", target, index);
            } else {
                printf("Khong tim thay %d trong mang.\n");
            }
            break;
        } else if (sub_choice == 'c' || sub_choice == 'C'){
            break;
        } else {
            printf("Lua chon khong hop le.\n");
        }
    } while (1);
}
