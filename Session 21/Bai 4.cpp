#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_BOOK 3 

typedef struct{
	char title [100];
	char author [50];
	float price;
} Book;

void clear_input (){
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

void input_book (Book *b, int index){
		printf ("Moi ban nhap vao ten sach (So %d): ");
		if (fgets(b->title, sizeof(b->title), stdin) != NULL){
			size_t len = strlen(b->title);
			if (len > 0 && b->title[len - 1] == '\n'){
				b->title[len - 1] = '\0';
			} else {
				printf ("Loi nhap lieu, vui long nhap lai !!!\n");
			}
		}
		
		printf ("Moi ban nhap vao ten tac gia: ");
		if (fgets(b->author, sizeof(b->author), stdin) != NULL){
			size_t len = strlen(b->author);
			if (len > 0 && b->author[len - 1] == '\n'){
				b->author[len - 1] = '\0';
			} else {
				printf ("Loi nhap lieu, vui long nhap lai !!!\n");
		}
		
		do{
			printf ("Moi ban nhap vao gia tien: ");
			if (scanf("%d", &b->price) != 1 || b->price < 0){
				printf ("Loi nhap lieu, vui long nhap lai !!!\n");
				clear_input();
				continue;
			}
			clear_input();
			break;
		} while (true);
	}
}

void printf_book (const Book book[], int n){
	for (int i = 0; i < MAX_BOOK; i++){
		printf ("---THONG TIN CUA SACH (SO %d)---\n", i + 1);
		printf ("Ten: %s\n", book[1].title);
		printf ("Tac gia: %s\n", book[1].author);
		printf ("Gia: %.2f\n", book[i].price);
	}
}

int main(){
	Book book[MAX_BOOK];
	for(int i = 0; i < MAX_BOOK; i++){
		input_book(&book[i], i + 1);
	}
	printf_book(book, MAX_BOOK);
	
	return 0;
}
