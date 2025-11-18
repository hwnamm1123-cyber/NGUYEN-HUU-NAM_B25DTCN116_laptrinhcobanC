#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_PHONE_LEN 15
#define MAX_STUDENTS 50 
#define NUM_INITIAL_STUDENTS 5 

typedef struct {
    int id;
    char name[MAX_NAME_LEN];
    int age;
    char phoneNumber[MAX_PHONE_LEN];
} Students;

void clearInputBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int find_maxId(const Students list[], int n){
    int maxId = 0;
    for (int i = 0; i < n; i++) {
        if (list[i].id > maxId) {
            maxId = list[i].id;
        }
    }
    return maxId;
}

void input_students_infor(Students *sv) {
    printf("Nhap Ten sinh vien: ");
    if (fgets(sv->name, MAX_NAME_LEN, stdin) != NULL) {
        sv->name[strcspn(sv->name, "\n")] = 0;
    }

    do {
        printf("Nhap Tuoi: ");
        if (scanf("%d", &sv->age) != 1 || sv->age <= 0) {
            printf("Loi nhap lieu. Vui long nhap lai Tuoi!!!\n");
            clearInputBuffer();
        } else {
            clearInputBuffer();
            break;
        }
    } while (1);

    printf("  - Nhap So Dien Thoai (max %d ky tu): ", MAX_PHONE_LEN - 1);
    if (fgets(sv->phoneNumber, MAX_PHONE_LEN, stdin) != NULL) {
        sv->phoneNumber[strcspn(sv->phoneNumber, "\n")] = 0;
    }
}

void printf_students_infor(const Students *sv){
    printf("| %4d | %-20s | %-4d | %-17s |\n", 
           sv->id, 
           sv->name, 
       	   sv->age, 
           sv->phoneNumber);
}

void printf_list(const Students list[], int n){
    printf("\n--- DANH SACH SINH VIEN HIEN TAI (%d sinh vien) ---\n", n);
    printf("----------------------------------------------------------\n");
    printf("|  ID  | Ten                  | Tuoi | So Dien Thoai     |\n");
    printf("----------------------------------------------------------\n");

    if (n == 0) {
        printf("|              Danh sach hien tai rong.                |\n");
        printf("----------------------------------------------------------\n");
        return;
    }

    for (int i = 0; i < n; ++i) {
        printf_students_infor(&list[i]);
    }

    printf("----------------------------------------------------------\n");
}

void add_students(Students list[], int *n){
    int currentSize = *n; 

    printf("\n--- CHUC NANG THEM SINH VIEN VAO CUOI MANG ---\n");
    if (currentSize >= MAX_STUDENTS){
        printf("? Danh sach da day (%d phan tu), khong the them sinh vien moi.\n", MAX_STUDENTS);
        return;
    }
    
    printf("* Nhap thong tin sinh vien thu %d (vi tri cuoi cung):\n", currentSize + 1);
    input_students_infor(&list[currentSize]);
    
    int maxId = find_maxId(list, currentSize); 
    list[currentSize].id = maxId + 1;
    (*n)++;

    printf("\n?? THEM SINH VIEN THANH CONG! ID moi: %d\n", list[currentSize].id);
}


int main() {
    Students list_students[MAX_STUDENTS] = {
        {101, "Nguyen Van A", 20, "0901112222"},
        {102, "Tran Thi B", 21, "0903334444"},
        {103, "Le Van C", 19, "0905556666"},
        {104, "Pham Thi D", 22, "0907778888"},
        {105, "Hoang Van E", 20, "0909990000"}
    };
    int n = NUM_INITIAL_STUDENTS; 
    
    printf_list(list_students, n);
    add_students(list_students, &n);
    printf_list(list_students, n);

    return 0;
}
