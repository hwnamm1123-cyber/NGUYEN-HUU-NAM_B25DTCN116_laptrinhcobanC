#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_PRODUCTS 5

typedef struct {
	char name[50];
    float price;
    int quantity;
} Product;

void clear_input(){
	int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void input_product_info(Product *p, int index){
	printf("---Nhap thong tin San pham thu %d ---\n", index);

    printf("Ten San pham: ");
    if (fgets(p->name, sizeof(p->name), stdin) != NULL) {
        size_t len = strlen(p->name);
        if (len > 0 && p->name[len - 1] == '\n') {
            p->name[len - 1] = '\0';
        }
    }

    do {
        printf("Gia: ");
        if (scanf("%f", &p->price) != 1 || p->price < 0) {
            printf("Vui long nhap gia tri so khong am !!!\n");
            clear_input();
        } else {
            clear_input();
            break;
        }
    } while (true);
    
    do {
        printf("So luong: ");
        if (scanf("%d", &p->quantity) != 1 || p->quantity < 0) {
            printf("Vui long nhap so nguyen khong am !!!\n");
            clear_input();
        } else {
            clear_input();
            break;
        }
    } while (true);
}


double calculate_total_value(const Product products[], int n){
	double total = 0.0;
    
    for (int i = 0; i < n; i++) {
        double product_value = (double)products[i].price * products[i].quantity;
        total += product_value;
    }
    
    return total;
}

int main() {
    Product products[MAX_PRODUCTS];
    double total_value;

    printf("CHUONG TRINH QUAN LY KHO HANG\n");

    for (int i = 0; i < MAX_PRODUCTS; i++) {
        input_product_info(&products[i], i + 1);
    }

    total_value = calculate_total_value(products, MAX_PRODUCTS);

    printf(" TONG GIA TRI KHO HANG\n");
    printf("Tong gia tri cua tat ca san pham: %.2lf VND\n", total_value);

    return 0;
}
