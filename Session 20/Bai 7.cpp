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
    char phone_number[MAX_PHONE_LEN];
} students;

void clearInputBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void printf_infor_student(const students *sv){
    printf("| %4d | %-20s | %-4d | %-17s |\n", 
    sv->id, 
    sv->name, 
    sv->age, 
    sv->phone_number);
}

void printf_list_student(const students list[], int n){
    printf("\n--- DANH SACH SINH VIEN HIEN TAI (%d sinh vien) ---\n", n);
    printf("----------------------------------------------------------\n");
    printf("|  ID  | Ten                  | Tuoi | So Dien Thoai     |\n");
    printf("----------------------------------------------------------\n");

    for (int i = 0; i < n; ++i) {
        printf_infor_student(&list[i]);
    }

    printf("----------------------------------------------------------\n");
}

void delete_student(students list[], int *n) {
    int id_search;
    int found_index = -1; 
    int current_size = *n; 

    printf("\n---CHUC NANG XOA SINH VIEN---\n");
    printf("Nhap ID sinh vien can xoa: ");
    
    if (scanf("%d", &id_search) != 1) {
        printf("ID khong hop le.\n");
        clearInputBuffer();
        return;
    }
    clearInputBuffer(); 

    for (int i = 0; i < current_size; ++i) {
        if (list[i].id == id_search) {
            found_index = i;
            break; 
        }
    }

    if (found_index == -1) {
        printf("KHONG TIM THAY sinh vien co ID %d de xoa.\n", id_search);
    } else {
        printf("TIM THAY sinh vien ID %d (%s)\n", id_search, list[found_index].name);
        
        for (int i = found_index; i < current_size - 1; ++i) {
            list[i] = list[i+1];
        }
        
        (*n)--;

        printf("XOA SINH VIEN CO ID %d THANH CONG!\n", id_search);
    }
}


int main() {
    students list_student[MAX_STUDENTS] = {
        {101, "Nguyen Van A", 20, "0901112222"},
        {102, "Tran Thi B", 21, "0903334444"},
        {103, "Le Van C", 19, "0905556666"},
        {104, "Pham Thi D", 22, "0907778888"},
        {105, "Hoang Van E", 20, "0909990000"}
    };
    int n = NUM_INITIAL_STUDENTS; 

    printf_list_student(list_student, n);

    delete_student(list_student, &n);

    printf_list_student(list_student, n);

    return 0;
}
