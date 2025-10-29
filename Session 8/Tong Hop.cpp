#include <stdio.h>

// khai bao cac ham tra ve int
int Themphantu (int a[], int *n); //su dung *n vi ham thay doi kich thuoc cua mang
int Xoaphantu (int a[], int *n);
int Capnhatgiatri (int a[], int n); //su dung n vi khong lam thay doi kich thuoc cua mang
int Timkiemphantu (int a[], int n);
int Hienthimang (int a[], int n);
int Sapxepmang (int a[], int n);

// thuc hien khai bao ham hien thi menu
int Hienthimenu();
int Hienthimenu(){
	printf("\n-----Quan ly danh sach so nguyen-----");
	printf("\n(1). Them phan tu vao vi tri bat ky.");
	printf("\n(2). Xoa phan tu o vi tri bat ky.");
	printf("\n(3). Cap nhat gia tri tai vi tri bat ky.");
	printf("\n(4). Tim kiem phan tu trong mang.");
	printf("\n(5). Hien thi mang.");
	printf("\n(6). Sap xep lai mang.");
	printf("\n(7). Thoat chuong trinh.");
	printf("\nMoi ban nhap vao lua chon (1-7): ");
	return 0; 
} 

void clearInputBuffer(){  // khai bao ham xoa bo nho dem de goi => tranh lap lai nhieu lan khi code
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

#define MAX_SIZE 100

//them phan tu
int Themphantu (int a[], int *n){
	if (*n >= MAX_SIZE){
		printf ("Vuot qua gia tri cua mang");
		return -1;
	}
	
	int position, value; // vi tri, gia tri
	// nhap vi tri
	printf("Moi ban nhap vao vi tri muon them (0 den %d)", *n);
	if(scanf("%d", &position) != 1 || position < 0 || position > *n){
		printf ("Loi khong hop le");
		clearInputBuffer();
		return -1;
	}
	
	//nhap gia tri
	printf("Moi ban nhap vao gia tri muon them: ");
	if(scanf("%d", &value) != 1 ){
		printf ("Loi khong hop le");
		clearInputBuffer();
		return -1;
	}
	
	for (int i = *n; i > position; i--) {
        a[i] = a[i - 1];
    }
    
    a[position] = value;
    (*n)++; // tang kich thuoc cua mang
    
    printf("Da them %d vao vi tri %d.\n", value, position);
    return 0;
}

//xoa phan tu
int Xoaphantu(int a[], int *n){
    if (*n <= 0) {
        printf("Vuot qua gia tri mang");
        return -1;
    }
    
    int position;
    printf("Nhap vi tri muon xoa (0 den %d): ", *n - 1);
    if (scanf("%d", &position) != 1 || position < 0 || position >= *n){
        printf("Loi khong hop le");
        clearInputBuffer();
        return -1;
    }
    
    // Dich chuyen mang de lap day cho trong
    int Clean = a[position];
    for (int i = position; i < *n - 1; i++){
        a[i] = a[i + 1];
    }
    
    (*n)--; // Giam kich thuoc mang
    
    printf("Da xoa phan tu %d tai vi tri %d.\n", Clean, position);
    return 0;
}

//cap nhat gia tri
int Capnhatgiatri(int a[], int n){
    if (n <= 0){
        printf("Loi");
        return -1;
    }
    
    int position, New;
    printf("Nhap vi tri muon cap nhat (0 den %d): ", n - 1);
    if (scanf("%d", &position) != 1 || position < 0 || position >= n) {
        printf("Loi");
        clearInputBuffer();
        return -1;
    }
    
    printf("Nhap gia tri moi: ");
    if (scanf("%d", &New) != 1){
        printf("Gia tri khong hop le.\n");
        clearInputBuffer();
        return -1;
    }
    
    int Old = a[position];
    a[position] = New;
    
    printf("Da cap nhat a[%d] tu %d thanh %d.\n", position, Old, New);
    return 0;
}

//tim kiem phan tu
int Timkiemphantu(int a[], int n) {
    if (n <= 0) {
        printf("Loi\n");
        return -1;
    }
    
    int Search;
    printf("Nhap gia tri can tim: ");
    if (scanf("%d", &Search) != 1) {
        printf("Loi");
        clearInputBuffer();
        return -1;
    }
    
    int Found = 0;  //Found : tim thay 
    printf("Cac vi tri tim thay gia tri %d la: ", Search);
    for (int i = 0; i < n; i++) {
        if (a[i] == Search) {
            printf("%d ", i);
            Found = 1;
        }
    }
    
    if (!Found){
        printf("Khong tim thay gia tri %d trong mang.\n", Search);
        return 1;
    }
    printf("\n");
    return 0;
}

//hien thi mang
int Hienthimang(int a[], int n){
    if (n == 0) {
        printf(" Mang hien tai rong)\n"); // rong => = 0 
        return 1;
    }
    
    printf("Mang hien tai (Kich thuoc %d): [", n);
    for (int i = 0; i < n; i++){
        printf("%d", a[i]);
        if (i < n - 1){
            printf(", ");
        }
    }
    printf("]\n");
    
    return 0;
} 

//sap xep mang
int Sapxepmang(int a[], int n) {
    if (n <= 1) {
        printf("Khong can sap xep.\n"); // vi co 0 hoac 1 phan tu 
        return 1;
    }
    
    int temp;
    //Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // hoan vi (swap)
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    printf("Mang da duoc sap xep.\n");
    Hienthimang(a, n);
    return 0;
} 


//thuc hien ham ching
int main(){
	int n = 0; // gia tri ban dau cua n
	int selection;;
	
	printf ("--MOI BAN NHAP VAO SO PHAN TU CUA MANG--\n");
	// nguoi dung nhap vao so phan tu cua mang 
	printf("Moi ban nhap vao so phan tu cua mang: ");
	if(scanf("%d", &n) != 1 || n <= 0){
		printf ("Loi nhap lieu");
		return 1;
	}
	
	int a[n];
	// moi nhap vao gia tri cua tung phan tu 
	for(int i = 0; i < n; i++){
		printf("Moi ban nhap vao phan tu thu %d trong mang: ", i);
		scanf("%d", &a[i]); 
	}
	
	do{
		Hienthimenu();
		if(scanf("%d", &selection) != 1 || selection <= 0 || selection > 7){
			printf ("Loi nhap lieu");
			clearInputBuffer();
			selection = -1;
			continue;
		}
		clearInputBuffer();
		
		switch (selection){
			case 1:
				printf ("Thuc hien chuc nang them phan tu\n");
				Themphantu(a, &n);
				break; 
			case 2:
				printf ("Thuc hien chuc nang xoa phan tu\n");
				Xoaphantu(a, &n);
				break;
			case 3:
				printf ("Thuc hien chuc nang cap nhat gia tri\n");
				Capnhatgiatri(a, n);
				break;
			case 4:
				printf ("Thuc hien chuc nang tim kiem phan tu\n");
				Timkiemphantu(a, n);
				break;
			case 5:
				printf ("Thuc hien chuc nang hien thi mang\n");
				Hienthimang(a, n);
				break;
			case 6:
				printf ("Thuc hien chuc nang sap xep mang\n");
				Sapxepmang(a, n);
				break; 
			case 7:
				printf ("Thuc hien chuc nang thoat chuong trinh\n");
				break;
			default:
				printf("\nLua chon khong hop le\n");
				break;
		}
	} while (selection != 8);
	return 0;
} 



