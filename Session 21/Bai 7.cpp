#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 50
#define MAX_CATEGORY_LENGTH 50
#define MAX_ID_LENGTH 10

typedef struct{
    char book_id[MAX_ID_LENGTH];
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    float price;
    char category[MAX_CATEGORY_LENGTH];
} Book;

void clear_input(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void display_menu(){

    printf("              MENU QUAN LY SACH\n");
    printf("1. Nhap so luong va thong tin sach\n");
    printf("2. Hien thi thong tin sach\n");
    printf("3. Them sach vao vi tri\n");
    printf("4. Xoa sach theo ma sach\n");
    printf("5. Cap nhat thong tin sach theo ma sach\n");
    printf("6. Sap xep sach theo gia (tang/giam)\n");
    printf("7. Tim kiem sach theo ten sach\n");
    printf("8. Thoat\n");
}

void input_book_info(Book *b){
    printf("Ma sach: ");
    if (fgets(b->book_id, sizeof(b->book_id), stdin) != NULL){
        b->book_id[strcspn(b->book_id, "\n")] = 0;
    }
    printf("Ten sach: ");
    if (fgets(b->title, sizeof(b->title), stdin) != NULL){
        b->title[strcspn(b->title, "\n")] = 0;
    }
    printf("Tac gia: ");
    if (fgets(b->author, sizeof(b->author), stdin) != NULL){
        b->author[strcspn(b->author, "\n")] = 0;
    }
    printf("The loai: ");
    if (fgets(b->category, sizeof(b->category), stdin) != NULL){
        b->category[strcspn(b->category, "\n")] = 0;
    }
    
    do {
        printf("Gia tien: ");
        if (scanf("%f", &b->price) != 1 || b->price < 0){
            printf("Gia khong hop le. Nhap lai.\n");
            clear_input();
        } else {
            clear_input();
            break;
        }
    } while (true);
}

void input_list(Book arr[], int *n){
    int new_n;
    printf("NHAP SO LUONG SACH MOI\n");
    
    if (*n >= MAX_BOOKS) {
        printf("Danh sach da day (%d cuon).\n", MAX_BOOKS);
        return;
    }

    printf("Nhap so luong sach can them (toi da %d): ", MAX_BOOKS - *n);
    if (scanf("%d", &new_n) != 1 || new_n <= 0) {
        printf("So luong khong hop le.\n");
        clear_input();
        return;
    }
    clear_input();

    if (*n + new_n > MAX_BOOKS){
        printf("Tong so luong sach vuot qua gioi han\n", MAX_BOOKS, MAX_BOOKS - *n);
        new_n = MAX_BOOKS - *n;
    }
    
    for (int i = 0; i < new_n; i++){
        printf("Nhap thong tin cho sach thu %d:\n", *n + i + 1);
        input_book_info(&arr[*n + i]);
    }
    *n += new_n;
    printf("Da them %d cuon sach thanh cong. Tong so sach: %d\n", new_n, *n);
}

void display_list(const Book arr[], int n) {
    if (n == 0) {
        printf("ANH SACH SACH DANG RONG.\n");
        return;
    }
    printf("| %-8s | %-30s | %-20s | %-10s | %-15s |\n", "MA SACH", "TEN SACH", "TAC GIA", "GIA TIEN", "THE LOAI");
    for (int i = 0; i < n; i++) {
        printf("| %-8s | %-30s | %-20s | %-10.2f | %-15s |\n",
               arr[i].book_id, arr[i].title, arr[i].author, arr[i].price, arr[i].category);
   	}
}

int find_index_by_id(const Book arr[], int n, const char *id) {
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].book_id, id) == 0) {
            return i;
        }
    }
    return -1;
}

void insert_book(Book arr[], int *n) {
    if (*n >= MAX_BOOKS) {
        printf("Danh sach da day (%d cuon). Khong the them.\n", MAX_BOOKS);
        return;
    }
    
    int pos;
    printf("THEM SACH VAO VI TRI\n");
    if (*n == 0) {
        pos = 1;
        printf("Danh sach dang rong. Sach se duoc them vao vi tri dau tien.\n");
    } else {
        printf("Nhap vi tri muon them (1 den %d): ", *n + 1);
        if (scanf("%d", &pos) != 1 || pos < 1 || pos > *n + 1){
            printf("Vi tri khong hop le.\n");
            clear_input();
            return;
        }
        clear_input();
    }

    for (int i = *n; i >= pos; i--){
        arr[i] = arr[i - 1];
    }

    printf("Nhap thong tin cho sach moi:\n");
    input_book_info(&arr[pos - 1]);
    (*n)++;
    printf("Da them sach thanh cong tai vi tri %d.\n", pos);
}

void delete_book(Book arr[], int *n){
    if (*n == 0) {
        printf("Danh sach rong, khong co sach de xoa.\n");
        return;
    }

    char id_to_delete[MAX_ID_LENGTH];
    printf("OA SACH THEO MA SACH\n");
    printf("Nhap Ma sach can xoa: ");
    if (fgets(id_to_delete, sizeof(id_to_delete), stdin) != NULL){
        id_to_delete[strcspn(id_to_delete, "\n")] = 0;
    }

    int index = find_index_by_id(arr, *n, id_to_delete);

    if (index == -1) {
        printf("Khong tim thay sach voi Ma sach: %s\n", id_to_delete);
        return;
    }

    for (int i = index; i < *n - 1; i++){
        arr[i] = arr[i + 1];
    }

    (*n)--;
    printf("Da xoa sach voi Ma sach %s thanh cong.\n", id_to_delete);
}

void update_book(Book arr[], int n) {
    char id_to_update[MAX_ID_LENGTH];
    printf("CAP NHAT THONG TIN SACH\n");
    printf("Nhap Ma sach can cap nhat: ");
    if (fgets(id_to_update, sizeof(id_to_update), stdin) != NULL){
        id_to_update[strcspn(id_to_update, "\n")] = 0;
    }

    int index = find_index_by_id(arr, n, id_to_update);

    if (index == -1) {
        printf("Khong tim thay sach voi Ma sach: %s\n", id_to_update);
        return;
    }

    printf("Tim thay sach. Nhap thong tin moi:\n");
    
    printf("Ten sach moi: ");
    if (fgets(arr[index].title, sizeof(arr[index].title), stdin) != NULL){
        arr[index].title[strcspn(arr[index].title, "\n")] = 0;
    }
    printf("Tac gia moi: ");
    if (fgets(arr[index].author, sizeof(arr[index].author), stdin) != NULL){
        arr[index].author[strcspn(arr[index].author, "\n")] = 0;
    }
    printf("The loai moi: ");
    if (fgets(arr[index].category, sizeof(arr[index].category), stdin) != NULL){
        arr[index].category[strcspn(arr[index].category, "\n")] = 0;
    }
    do {
        printf("Gia tien moi: ");
        if (scanf("%f", &arr[index].price) != 1 || arr[index].price < 0){
            printf("Gia khong hop le. Nhap lai.\n");
            clear_input();
        } else {
            clear_input();
            break;
        }
    } while (true);

    printf("Da cap nhat thong tin sach %s thanh cong.\n", id_to_update);
}

void sort_by_price(Book arr[], int n, bool ascending){
    if (n <= 1) {
        printf("Danh sach co qua it phan tu de sap xep.\n");
        return;
    }
    
    Book temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            bool condition = ascending ? (arr[j].price > arr[j + 1].price) : (arr[j].price < arr[j + 1].price);
            
            if (condition) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    display_list(arr, n);
}

void search_by_title(const Book arr[], int n) {
    char search_title[MAX_TITLE_LENGTH];
    printf("TIM KIEM SACH THEO TEN\n");
    printf("Nhap Ten sach can tim (khong phan biet chu hoa/thuong): ");
    if (fgets(search_title, sizeof(search_title), stdin) != NULL) {
        search_title[strcspn(search_title, "\n")] = 0;
    }
    
    for (char *p = search_title; *p; p++) *p = tolower(*p);
    
    bool found = false;
    printf("---KET QUA TIM KIEM---\n");
    
    for (int i = 0; i < n; i++) {
        char current_title_lower[MAX_TITLE_LENGTH];
        strcpy(current_title_lower, arr[i].title);
        
        for (char *p = current_title_lower; *p; p++) *p = tolower(*p);
        
        if (strstr(current_title_lower, search_title) != NULL){
            printf("Tim thay tai vi tri %d:\n", i + 1);
            printf("Ma sach: %s, Ten sach: %s, Gia: %.2f\n", arr[i].book_id, arr[i].title, arr[i].price);
            found = true;
        }
    }
    
    if (!found) {
        printf("Khong tim thay sach nao co ten chua %s\n", search_title);
    }
}

int main(){
    Book book_array[MAX_BOOKS];
    int num_books = 0;
    int choice;
    bool running = true;

    while (running){
        display_menu();
        printf("Nhap lua chon cua ban: ");
        if (scanf("%d", &choice) != 1) {
            printf("Vui long nhap mot so.\n");
            clear_input();
            continue;
        }
        clear_input(); 

        switch (choice){
            case 1:
                input_list(book_array, &num_books);
                break;
            case 2:
                display_list(book_array, num_books);
                break;
            case 3:
                insert_book(book_array, &num_books);
                break;
            case 4:
                delete_book(book_array, &num_books);
                break;
            case 5:
                update_book(book_array, num_books);
                break;
            case 6: {
                printf("Chon kieu sap xep (1: Tang dan, 2: Giam dan): ");
                int sort_choice;
                if (scanf("%d", &sort_choice) != 1) {
                    printf("Lua chon khong hop le.\n");
                    clear_input();
                    break;
                }
                clear_input();
                sort_by_price(book_array, num_books, (sort_choice == 1));
                break;
            }
            case 7:
                search_by_title(book_array, num_books);
                break;
            case 8:
                running = false;
                printf("Da thoat chuong trinh !!!\n");
                break;
            default:
                printf(" Lua chon khong hop le. Vui long chon tu 1 den 8.\n");
                break;
        }
    }

    return 0;
}
