#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CONTACTS 100
#define NAME_LENGTH 50
#define PHONE_LENGTH 15
#define EMAIL_LENGTH 50

typedef struct{
	char name[NAME_LENGTH];
	char phoneNumber[PHONE_LENGTH];
	char email[EMAIL_LENGTH];
} Contact;
        
void clear_input();
void hienThiMenu();
void add_contact(Contact[], int *n);
void input_contact_data(Contact *c);
void add_contact(Contact contacts[], int *n);
void display_all_contacts(const Contact contacts[], int n);
int find_index_by_name(const Contact contacts[], int n, const char *search_name);
void search_contact(const Contact contacts[], int n);
void delete_contact(Contact contacts[], int *n);
void delete_contact(Contact contacts[], int *n);
        
int main(){
	Contact contact_list[MAX_CONTACTS];
    int num_contacts = 0; 
    int choice;
    bool running = true;

    while (running){
        hienThiMenu();
        printf("Nhap lua chon cua ban: ");
        if (scanf("%d", &choice) != 1 || choice < 1 || choice > 5){
            printf("\n[Loi] Vui long nhap mot so.\n");
            clear_input();
            continue;
        }
        clear_input(); 

        switch (choice) {
            case 1:
                add_contact(contact_list, &num_contacts);
                break;
            case 2:
                display_all_contacts(contact_list, num_contacts);
                break;
            case 3:
                search_contact(contact_list, num_contacts);
                break;
            case 4:
                delete_contact(contact_list, &num_contacts);
                break;
            case 5:
                running = false;
                printf("Da thoat chuong trinh Quan ly Danh Ba. Tam biet!\n");
                return 0;
            default:
                break;
        }
    }
    return 0;
}

void clear_input(){
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

void hienThiMenu(){
	printf ("\n+---------------------MENU---------------------+\n");
	printf ("|1. Them lien he moi                           |\n");
	printf ("|2. Hien thi tat ca lien he                    |\n");
	printf ("|3. Tim kiem theo ten                          |\n");
	printf ("|4. Xoa lien he theo ten                       |\n");
	printf ("|5. Thoat chuong trinh                         |\n");
	printf ("+----------------------------------------------+\n");
}

void add_contact(Contact[], int *n){
	if (*n >= MAX_CONTACTS){
        printf("Danh ba da day (%d lien he). Khong the them.\n", MAX_CONTACTS);
        return;
    }
 }
  
 void input_contact_data(Contact *c){
    printf("  Nhap Ten: ");
    if (fgets(c->name, NAME_LENGTH, stdin) != NULL){
        c->name[strcspn(c->name, "\n")] = 0;
    }
    printf("  Nhap So dien thoai: ");
    if (fgets(c->phoneNumber, PHONE_LENGTH, stdin) != NULL){
        c->phoneNumber[strcspn(c->phoneNumber, "\n")] = 0;
    }
    printf("  Nhap Email: ");
    if (fgets(c->email, EMAIL_LENGTH, stdin) != NULL){
        c->email[strcspn(c->email, "\n")] = 0;
    }
}

void add_contact(Contact contacts[], int *n){
    if (*n >= MAX_CONTACTS) {
        printf("Danh ba da day (%d lien he). Khong the them.\n", MAX_CONTACTS);
        return;
    }

    printf("THEM LIEN HE MOI\n");

    char temp_name[NAME_LENGTH];
    printf("  Nhap Ten: ");
    if (fgets(temp_name, NAME_LENGTH, stdin) != NULL){
        temp_name[strcspn(temp_name, "\n")] = 0;
    }

    if (find_index_by_name(contacts, *n, temp_name) != -1){
        printf("Lien he co ten '%s' da ton tai. Khong them lien he moi.\n", temp_name);
        return;
    }
    
    strcpy(contacts[*n].name, temp_name);
    
    printf("  Nhap So dien thoai: ");
    if (fgets(contacts[*n].phoneNumber, PHONE_LENGTH, stdin) != NULL){
        contacts[*n].phoneNumber[strcspn(contacts[*n].phoneNumber, "\n")] = 0;
    }
    
    printf("  Nhap Email: ");
    if (fgets(contacts[*n].email, EMAIL_LENGTH, stdin) != NULL){
        contacts[*n].email[strcspn(contacts[*n].email, "\n")] = 0;
    }
    
    (*n)++;
    printf("Da them lien he '%s' thanh cong. Tong so lien he: %d\n", temp_name, *n);
}

void display_all_contacts(const Contact contacts[], int n){
    if (n == 0) {
        printf("DANH BA LIEN HE DANG RONG.\n");
        return;
    }
    printf("| %-4s | %-20s | %-15s | %-35s |\n", "STT", "TEN", "SO DIEN THOAI", "EMAIL");
    for (int i = 0; i < n; i++){
    	printf("| %-4d | %-20s | %-15s | %-35s |\n",
    	i + 1, contacts[i].name, contacts[i].phoneNumber, contacts[i].email);
	}
}

int find_index_by_name(const Contact contacts[], int n, const char *search_name){
	char lower_search[NAME_LENGTH];
    char lower_current[NAME_LENGTH];

    for (int i = 0; search_name[i] && i < NAME_LENGTH; i++) {
        lower_search[i] = tolower(search_name[i]);
    }
    lower_search[NAME_LENGTH - 1] = '\0';
    lower_search[strlen(search_name)] = '\0'; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; contacts[i].name[j] && j < NAME_LENGTH; j++){
            lower_current[j] = tolower(contacts[i].name[j]);
        }
        lower_current[NAME_LENGTH - 1] = '\0';
        lower_current[strlen(contacts[i].name)] = '\0';

        if (strcmp(lower_current, lower_search) == 0) {
            return i;
        }
    }
    return -1;
}

void search_contact(const Contact contacts[], int n){
    char search_name[NAME_LENGTH];
    printf("\n=> TIM KIEM LIEN HE THEO TEN\n");
    printf("Nhap Ten lien he can tim: ");
    if (fgets(search_name, NAME_LENGTH, stdin) != NULL) {
        search_name[strcspn(search_name, "\n")] = 0;
    }

    int index = find_index_by_name(contacts, n, search_name);

    if (index != -1) {
        printf("\n--- KET QUA TIM KIEM ---\n");
        printf("Tim thay lien he '%s' o vi tri thu %d:\n", contacts[index].name, index + 1);
        printf("  - Ten: %s\n", contacts[index].name);
        printf("  - So dien thoai: %s\n", contacts[index].phoneNumber);
        printf("  - Email: %s\n", contacts[index].email);
    } else {
        printf("\n[Thong bao] Khong tim thay lien he co ten '%s'.\n", search_name);
    }
}

void delete_contact(Contact contacts[], int *n){
    if (*n == 0) {
        printf("[Loi] Danh ba rong, khong co lien he de xoa.\n");
        return;
    }

    char name_to_delete[NAME_LENGTH];
    printf("\n=> XOA LIEN HE THEO TEN\n");
    printf("Nhap Ten lien he can xoa: ");
    if (fgets(name_to_delete, NAME_LENGTH, stdin) != NULL){
        name_to_delete[strcspn(name_to_delete, "\n")] = 0;
    }

    int index = find_index_by_name(contacts, *n, name_to_delete);

    if (index == -1) {
        printf("[Loi] Khong tim thay lien he co ten '%s' de xoa.\n", name_to_delete);
        return;
    }

    for (int i = index; i < *n - 1; i++){
        contacts[i] = contacts[i + 1];
    }

    (*n)--;
    printf("Da xoa lien he '%s' thanh cong. So lien he con lai: %d\n", name_to_delete, *n);
}

