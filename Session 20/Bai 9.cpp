#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

#define MAX_NAME_LEN 50
#define MAX_MENU_SIZE 100
#define NUM_INITIAL_DISHES 5

typedef struct {
    int id;
    char name[MAX_NAME_LEN];
    float price;
} Dish;

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int find_max_id(const Dish menu_array[], int count) {
    int max_id = 0;
    for (int i = 0; i < count; i++) {
        if (menu_array[i].id > max_id) {
            max_id = menu_array[i].id;
        }
    }
    return max_id;
}

void print_dish_info(const Dish *dish_ptr) {
    printf("ID: %d, Name: %s, Price: %.2f\n", dish_ptr->id, dish_ptr->name, dish_ptr->price);
}

void input_dish_info(Dish *dish_ptr) {
    printf("Nhap Ten mon an (max %d ky tu): ", MAX_NAME_LEN - 1);
    if (fgets(dish_ptr->name, MAX_NAME_LEN, stdin) != NULL) {
        dish_ptr->name[strcspn(dish_ptr->name, "\n")] = 0;
    }
    
    do {
        printf("Nhap Gia tien (so duong): ");
        if (scanf("%f", &dish_ptr->price) != 1 || dish_ptr->price <= 0) {
            printf("Loi nhap lieu. Vui long nhap lai Gia tien!!!\n");
            clear_input_buffer();
        } else {
            clear_input_buffer();
            break;
        }
    } while (1);
}

void print_menu_items(const Dish menu_array[], int count) {
    if (count == 0) {
        printf("Menu hien tai rong.\n");
        return;
    }
    printf("---DANH SACH MON AN TRONG MENU---\n");
    for (int i = 0; i < count; i++) {
        printf("%d. ", i + 1);
        print_dish_info(&menu_array[i]);
    }
}

void add_dish_at_position(Dish menu_array[], int *count_ptr) {
    if (*count_ptr >= MAX_MENU_SIZE) {
        printf("Menu da day, khong the them mon an moi!\n");
        return;
    }

    int insert_index;
    int current_count = *count_ptr;
    
    printf("---THEM MON AN TAI VI TRI CHI DINH---\n");
    do {
        printf("Nhap vi tri [0 den %d] muon them: ", current_count);
        if (scanf("%d", &insert_index) != 1 || insert_index < 0 || insert_index > current_count) {
            printf("Loi nhap lieu. Vui long nhap vi tri hop le.\n");
            clear_input_buffer();
        } else {
            clear_input_buffer();
            break;
        }
    } while (1);

    for (int i = current_count; i > insert_index; i--) {
        menu_array[i] = menu_array[i - 1];
    }
    
    printf("Nhap thong tin mon an moi:\n");
    input_dish_info(&menu_array[insert_index]);
    menu_array[insert_index].id = find_max_id(menu_array, current_count) + 1; 

    (*count_ptr)++;
    printf("Them mon an thanh cong vao vi tri %d. ID: %d\n", insert_index, menu_array[insert_index].id);
}

void edit_dish_at_position(Dish menu_array[], int count) {
    if (count == 0) {
        printf("Menu rong, khong co mon an de sua.\n");
        return;
    }

    int edit_index;
    printf("---SUA MON AN TAI VI TRI CHI DINH---\n");
    do {
        printf("Nhap vi tri [0 den %d] muon sua: ", count - 1);
        if (scanf("%d", &edit_index) != 1 || edit_index < 0 || edit_index >= count) {
            printf("Loi nhap lieu. Vui long nhap vi tri hop le.\n");
            clear_input_buffer();
        } else {
            clear_input_buffer();
            break;
        }
    } while (1);

    Dish *dish_ptr = &menu_array[edit_index];
    printf("Dang sua mon: ID %d, Ten hien tai: %s, Gia: %.2f\n", dish_ptr->id, dish_ptr->name, dish_ptr->price);
    
    printf("Nhap thong tin moi (ID khong doi):\n");
    input_dish_info(dish_ptr);
    printf("Sua mon an tai vi tri %d thanh cong.\n", edit_index);
}

void delete_dish_at_position(Dish menu_array[], int *count_ptr) {
    if (*count_ptr == 0) {
        printf("Menu rong, khong co mon an de xoa.\n");
        return;
    }

    int delete_index;
    int current_count = *count_ptr;

    printf("---XOA MON AN TAI VI TRI CHI DINH---\n");
    do {
        printf("Nhap vi tri [0 den %d] muon xoa: ", current_count - 1);
        if (scanf("%d", &delete_index) != 1 || delete_index < 0 || delete_index >= current_count) {
            printf("Loi nhap lieu. Vui long nhap vi tri hop le.\n");
            clear_input_buffer();
        } else {
            clear_input_buffer();
            break;
        }
    } while (1);

    printf("Xoa mon an: ID %d, Ten: %s\n", menu_array[delete_index].id, menu_array[delete_index].name);

    for (int i = delete_index; i < current_count - 1; i++) {
        menu_array[i] = menu_array[i + 1];
    }
    
    (*count_ptr)--;
    printf("Xoa mon an thanh cong.\n");
}

int compare_price_desc(const void *a, const void *b) {
    float price_a = ((Dish *)a)->price;
    float price_b = ((Dish *)b)->price;
    if (price_a < price_b) return 1;
    if (price_a > price_b) return -1;
    return 0;
}

int compare_price_asc(const void *a, const void *b) {
    float price_a = ((Dish *)a)->price;
    float price_b = ((Dish *)b)->price;
    if (price_a > price_b) return 1;
    if (price_a < price_b) return -1;
    return 0;
}

void sort_menu(Dish menu_array[], int count) {
    int choice;
    printf("\n--- SAP XEP DANH SACH MON AN ---\n");
    printf("a. Giam dan theo price\n");
    printf("b. Tang dan theo price\n");
    printf("Chon phuong thuc sap xep: ");
    
    choice = getchar();
    clear_input_buffer(); 
    
    if (count < 2) {
        printf("Khong the sap xep, can it nhat 2 mon an.\n");
        return;
    }

    if (choice == 'a' || choice == 'A') {
        qsort(menu_array, count, sizeof(Dish), compare_price_desc);
        printf("Sap xep Giam dan theo gia thanh cong.\n");
    } else if (choice == 'b' || choice == 'B') {
        qsort(menu_array, count, sizeof(Dish), compare_price_asc);
        printf("Sap xep Tang dan theo gia thanh cong.\n");
    } else {
        printf("Lua chon khong hop le.\n");
    }
}

void linear_search_by_name(const Dish menu_array[], int count) {
    char search_name[MAX_NAME_LEN];
    int found_count = 0;

    printf("---TIM KIEM TUYEN TINH THEO TEN---\n");
    printf("Nhap ten mon an can tim: ");
    if (fgets(search_name, MAX_NAME_LEN, stdin) != NULL) {
        search_name[strcspn(search_name, "\n")] = 0;
    }
    
    printf("---KET QUA TIM KIEM---\n");
    for (int i = 0; i < count; i++) {
        if (strstr(menu_array[i].name, search_name) != NULL) {
            printf("%d. ", ++found_count);
            print_dish_info(&menu_array[i]);
        }
    }

    if (found_count == 0) {
        printf("Khong tim thay mon an nao co ten chua '%s'.\n", search_name);
    } else {
        printf("Tim thay %d mon an.\n", found_count);
    }
}

void binary_search_info() {
    printf("\n---TIM KIEM NHI PHAN---\n");
    printf("Tim kiem nhi phan chi co hieu luc khi du lieu da duoc sap xep.\n");
    printf("Chuc nang nay hien tai khong thuc hien cho Ten (chuoi) ma khong sap xep truoc.\n");
}

int main() {
    Dish menu_array[MAX_MENU_SIZE] = {
        {101, "Pho Bo", 45000.0,},
        {102, "Bun Cha", 40000.0,},
        {103, "Banh My", 25000.0,},
        {104, "Com Ga", 55000.0,},
        {105, "Tra Sua", 35000.0,}
    };
    int current_dish_count = NUM_INITIAL_DISHES;
    int main_choice;

    do {
        printf("\n================= MENU =================\n");
        printf("1. In ra gia tri cac phan tu \n");
        printf("2. Them mot phan tu vao vi tri chi dinh\n");
        printf("3. Sua mot phan tu o vi tri chi dinh\n");
        printf("4. Xoa mot phan tu o vi tri chi dinh\n");
        printf("5. Sap xep cac phan tu\n");
        printf("6. Tim kiem phan tu theo name nhap vao\n");
        printf("7. Thoat\n");
        printf("======================================\n");
        printf("Nhap lua chon cua ban: ");

        if (scanf("%d", &main_choice) != 1) {
            clear_input_buffer();
            main_choice = 0; 
        }
        clear_input_buffer();

        switch (main_choice) {
            case 1:
                print_menu_items(menu_array, current_dish_count);
                break;
            case 2:
                add_dish_at_position(menu_array, &current_dish_count);
                break;
            case 3:
                edit_dish_at_position(menu_array, current_dish_count);
                break;
            case 4:
                delete_dish_at_position(menu_array, &current_dish_count);
                break;
            case 5:
                sort_menu(menu_array, current_dish_count);
                break;
            case 6: {
                int sub_choice;
                printf("\n---MENU TIM KIEM --\n");
                printf("a. Tim kiem tuyen tinh (theo Ten)\n");
                printf("b. Tim kiem nhi phan (Chi hoat dong khi du lieu sap xep)\n");
                printf("Chon phuong thuc tim kiem: ");
                sub_choice = getchar();
                clear_input_buffer();

                if (sub_choice == 'a' || sub_choice == 'A') {
                    linear_search_by_name(menu_array, current_dish_count);
                } else if (sub_choice == 'b' || sub_choice == 'B') {
                    binary_search_info();
                } else {
                    printf("Lua chon khong hop le.\n");
                }
                break;
            }
            case 7:
                printf("---Chuong trinh ket thuc---\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (main_choice != 7);

    return 0;
}
