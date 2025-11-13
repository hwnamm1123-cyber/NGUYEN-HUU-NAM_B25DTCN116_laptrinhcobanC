#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MIN_LENGTH 8
#define MAX_SIZE 100


void input_password(char str[], int max_size);

int main() {
    char password[MAX_SIZE];
    bool is_valid = true;
    int length;

    bool has_upper = false;
    bool has_lower = false;
    bool has_digit = false;
    bool has_special = false;

    printf("---KIEM TRA MAT KHAU---\n");

    input_password(password, MAX_SIZE);
    length = strlen(password);

    printf("Mat khau cua ban: \"%s\"\n", password);

    if (length < MIN_LENGTH) {
        is_valid = false;
        printf("Mat khau phai dai it nhat %d ky tu.\n", MIN_LENGTH);
    }

    for (int i = 0; i < length; i++) {
        char c = password[i];

        if (isupper(c)) {
            has_upper = true;
        } else if (islower(c)) {
            has_lower = true;
        } else if (isdigit(c)) {
            has_digit = true;
        } 
        
        if (!isalnum(c)) { 
            has_special = true;
        }
    }
 
    if (!has_upper) {
        is_valid = false;
        printf("Loi: Mat khau phai chua it nhat 1 chu HOA (A-Z)\n");
    }
    if (!has_lower) {
        is_valid = false;
        printf("Mat khau phai chua it nhat 1 chu thuong (a-z)\n");
    }
    if (!has_digit) {
        is_valid = false;
        printf("Mat khau phai chua it nhat 1 chu so (0-9)\n");
    }
    if (!has_special) {
        is_valid = false;
        printf("Mat khau phai chua it nhat 1 ky tu dac biet (!@#$.)\n");
    }

    if (is_valid && has_upper && has_lower && has_digit && has_special) {
        printf("MAT KHAU HOP LE !\n");
    } else {
        printf("MAT KHAU KHONG HOP LE !\n");
    }

    return 0;
}

void input_password(char str[], int max_size) {
    bool input_valid = false;
    int length;

    do {
        printf("Moi ban nhap vao mat khau: ");
        if (fgets(str, max_size, stdin) == NULL) {
            printf("Loi nhap lieu, vui long nhap lai !!!\n");
            continue;
        }

        length = strlen(str);

        if (length > 0 && str[length - 1] == '\n') {
            str[length - 1] = '\0';
            length--;
        }

        if (length > 0) {
            input_valid = true;
        } else {
            printf("Vui long khong de trong!\n");
        }
    } while (!input_valid);
}
