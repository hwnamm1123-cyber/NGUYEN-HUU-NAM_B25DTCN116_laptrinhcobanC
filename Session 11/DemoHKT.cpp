#include <stdio.h>
#define MAX_SIZE 100
 int main(){
 	int luachon, Sum = 0, value, value2, value3, pos1, pos2, pos3, temp, confirm;
 	char luachon2, luachon3;
 	int result_index = -1;
 	int a[MAX_SIZE];
 	int n = 0;
 	
 	do{
 		printf ("\n+----------------MENU QUAN LI DANH SACH SO NGUYEN----------------+\n");
 		printf ("|1. Nhap so phan tu va gia tri cho mang                          |\n");
 		printf ("|2. Hien thi mang                                                |\n");
 		printf ("|3. Tinh tong cac phan tu trong mang                             |\n");
 		printf ("|4. Them phan tu vao vi tri bat ky - Nhap vi tri muon them       |\n");
 		printf ("|5. Xoa phan tu o vi tri bat ky - Nhap vi tri muon them          |\n");
		printf ("|6. Cap nhat gai tri tai vi tri bat ky - Nhap vi tri muon them   |\n");
		printf ("|7. Tim kiem phan tu trong mang                                  |\n");
		printf ("| a) Tim bang thuat toan Linear Search                           |\n");
		printf ("| b) Tim bang thuat toan Binary search                           |\n");
		printf ("|8. Sap xep mang                                                 |\n");
		printf ("| a) Sap xep tang dan bang Bubble Sort                           |\n");
		printf ("| b) Sap xep tang dan bang Selection Sort                        |\n");
		printf ("|9. Tinh hieu cua so lon nhat va so nho nhat trong mang          |\n");
		printf ("|10. Thoat chuong trinh                                          |\n");
		printf ("+----------------------------------------------------------------+\n");
		do{
			printf ("Moi ban nhap vao lua chon: ");
			if (scanf("%d", &luachon) != 1 || luachon <= 0 || luachon > 10){
				printf("Loi nhap lieu, vui long nhap lai: \n");
				int c;
				while ((c = getchar()) != '\n' && c != EOF);
				continue;
			}
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			break;
		} while (1);
		
 		switch (luachon){
			case 1:
				do{
					printf ("Moi ban nhap vao so phan tu cua mang: ");
					if(scanf("%d", &n) != 1 || n < 0){
						printf ("Loi nhap lieu, vui long nhap lai !!!\n");
						int c;
						while ((c = getchar()) != '\n' && c != EOF);
						continue;
					} 
					int c;
					while ((c = getchar()) != '\n' && c != EOF);
					break;
				} while (1);
				
				for(int i = 0; i < n; i++){
					do{
						printf ("Moi ban nhap vao gia tri cua phan tu a[%d]: ", i);
						if (scanf("%d", &a[i]) != 1){
							printf ("Loi nhap lieu, vui long nhap lai !!!\n");
							int c;
							while ((c = getchar()) != '\n' && c != EOF);
							continue;
						} 
						int c;
						while ((c = getchar()) != '\n' && c != EOF);
						break;
					} while (1);
				}
				printf ("\n");
				break;
			case 2:
				if (n == 0){
					printf ("Mang khong co gia tri, vui long quay lai buoc 1 nhap gia tri mang.");
				}
				printf ("---MANG BAN DA NHAP LA---\n");
				for (int i = 0; i < n; i++){
					printf("%5d", a[i]);
				}
				printf ("\n");
				break;
			case 3:
				for (int i = 0; i < n; i++){
					Sum += a[i];
				}
				printf ("Tong cua cac phan tu trong mang la: %d", Sum);
				printf ("\n");
				break; 
			case 4:
				printf ("Moi ban nhap vao gia tri muon them: ");
				scanf ("%d", &value);
				do{
					printf ("Moi ban nhap vao vi tri muon them: ");
					if (scanf("%d", &pos1) != 1 || pos1 < 0 || pos1 > n){
						printf ("Loi nhap lieu, vui long nhap lai !!!\n");
						int c;
						while ((c = getchar()) != '\n' && c != EOF);
						continue;
					}
					int c;
					while ((c = getchar()) != '\n' && c != EOF);
					break;
				} while (1);
				for(int i = n; i > pos1; i--){
					a[i] = a[i - 1];
				}
				a[pos1] = value;
				n++;
				printf ("Mang sau khi ban da them phan tu la: ");
				for(int i = 0; i < n; i++){
					printf ("%5d", a[i]);
				}
				printf ("\n");
				break;
			case 5:
				do{
					printf ("Moi ban nhap vao vi tri muon xoa: ");
					if (scanf("%d", &pos2) != 1 || pos2 < 0 || pos2 > n){
						printf ("Loi nhap lieu, vui long nhap lai !!!\n");
						int c;
						while ((c = getchar()) != '\n' && c != EOF);
						continue;
					}
					int c;
					while ((c = getchar()) != '\n' && c != EOF);
					break;
				} while (1);
				for(int i = n; i < pos2; i++){
					a[i] = a[i + 1];
				}
				n--;
				printf ("---MANG SAU KHI THEM XOA TU---\n");
				for(int i = 0; i < n; i++){
					printf ("%5d", a[i]);
				}
				printf ("\n");
				break;
			case 6:
				do{
					printf ("Moi ban nhap vao vi tri can cap nhat: ");
					if (scanf("%d", &pos3) != 1 || pos3 < 0 || pos3 > n){
						printf ("Loi nhap lieu, vui long nhap lai !!!\n");
						int c;
						while ((c = getchar()) != '\n' && c != EOF);
						continue;
					}
					int c;
					while ((c = getchar()) != '\n' && c != EOF);
					break;
				} while (1);
				printf ("Moi ban nhap voa gia tri muon them: ");
				scanf ("%d", &value2);
				a[pos3] = value2;
				printf ("---MANG SAU KHI CAP NHAT PHAN TU---\n");
				for(int i = 0; i < n; i++){
					printf ("%5d", a[i]);
				}
				printf ("\n");
				break;
			case 7:
				do{
					printf ("Moi ban nhap vao lua chon su dung phuong an (a/b): ");
					if (scanf("%c", &luachon2) != 1 || (luachon2 != 'a' && luachon2 != 'b')){
						printf ("Loi nhap lieu vui long nhap a hoac b.\n");
						int c;
						while ((c = getchar()) != '\n' && c != EOF);
						continue;
					} 
					int c;
					while ((c = getchar()) != '\n' && c != EOF);
					break;
				} while (1); 
				
				do{
					printf ("Moi ban nhap vao gia tri can tim: ");
					if(scanf("%d", &value3) != 1){
						printf ("Loi nhap lieu vui long nhap a hoac b.\n");
						int c;
						while ((c = getchar()) != '\n' && c != EOF);
						continue;		
					}
					int c;
					while ((c = getchar()) != '\n' && c != EOF);
					break;
				} while (1);
				
				if (luachon2 == 'a'){
					for (int i = 0; i < n; i++){
						if (a[i] == value3){
							result_index = i;
							break;
						}
					}
				} else if (luachon2 == 'b'){
					int l = 0;
					int r = n -1;
					while ( l <= r){
						int mid = l + (r - l) / 2;
						if (a[mid] == value3){
							result_index = mid;
							break;
						} else if (a[mid] < value3){
							l = mid + 1;
						} else {
							r = mid - 1;
						}
					}
				}
				
				if (result_index != -1){
					printf("Tim thay gia tri %d tai vi tri %d", value3, result_index);
				} else {
					printf("Khong tim thay gia tri trong mang !!!");
				}
				printf ("\n");
				break;
			case 8:
				do{
					printf ("Moi ban nhap vao lua chon su dung phuong an (a/b): ");
					if (scanf("%c", &luachon3) != 1 || (luachon3 != 'a' && luachon3 != 'b')){
						printf ("Loi nhap lieu vui long nhap a hoac b.\n");
						int c;
						while ((c = getchar()) != '\n' && c != EOF);
						continue;
					} 
					int c;
					while ((c = getchar()) != '\n' && c != EOF);
					break;
				} while (1); 
				if(luachon3 == 'a'){
					for (int i = 0; i < n - 1; i++){
						for (int j = 0; j < n - 1 - i; j++){
							if (a[j] > a[j + 1]){
								temp = a [j];
								a[j] = a[j + 1];
								a[j + 1] = temp;
							}
						}
					}
				} else if (luachon3 == 'b'){
					for (int i = 0; i < n - 1; i++){
						int min_id = i;
						for (int j = i + 1; j < n; j++){
							if (a[j] < a[min_id]){
								min_id = j;
							}
						}
					}
				}
				printf("---MANG SAU KHI SAP XEP TANG DAN---\n");
				for(int i = 0; i < n; i++){
					printf("%5d", a[i]);
				}
				printf ("\n");
				break;
			case 9:
				for(int i = 0; i < n - 1; i++){
					for (int j = 0; j < n - 1 - i; j++){
						if (a[j] > a[j + 1]){
							temp = a [j];
							a[j] = a[j + 1];
							a[j + 1] = temp;
							}
						}
					}
				printf ("Gia tri lon nhat trong mang la: %d\n", a[n - 1]);
				printf ("Gia tri nho nhat trong mang la: %d", a[0]);
				printf ("\n");
				break;
			case 10:
				printf ("Ban xac nhan thoat chuong trinh? (1 - Co || 0 - Khong): ");
				do{
					if(scanf("%d", &confirm) != 1 || confirm < 0 || confirm > 1){
						printf("Vui long nhap 1(Co) hoac 0(Khong)!");
						int c;
						while ((c = getchar()) != '\n' && c != EOF);
						continue;
					}
					int c;
					while ((c = getchar()) != '\n' && c != EOF);
					break;
				} while (1);
				
				if (confirm == 1){
					printf ("Ket thuc chuong trinh !");
					return 0;
				} else {
					printf ("Huy thao tac!");
				}	
				break;
			default:
				break;
		}
	} while (1);
	return 0;
 } 
