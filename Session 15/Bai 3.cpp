#include <stdio.h>
#include <string.h>

void reverse(char std[]);

int main(){
	char a[100];
	
	printf ("Moi ban nhap vao mot chuoi: ");
	
	// nhap ca khoang trang 
	if (fgets(a, sizeof(a), stdin) == NULL){
		return 1; 
	}
	
	//loai ki tu xuong dong 
	a[strcspn(a, "\n")] = 0;
	
	printf ("Chuoi ban dau: %s\n", a);
	
	//goi ham 
	reverse(a);
	printf("Chuoi sau khi dao nguoc: %s\n", a);
	
	return 0; 
}

void reverse(char std[]){
	int length = strlen(std);
    int start = 0;
    int end = length - 1;
    char temp;
    
    while (start < end) {
        temp = std[start];
        
        std[start] = std[end];

        std[end] = temp;

        start++;
        end--;
    }
}
