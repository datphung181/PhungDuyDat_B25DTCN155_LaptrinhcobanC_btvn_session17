#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    int choice, i, len;

    do {
        printf("\n+------------------------MENU-------------------------+\n");
        printf("| 1. In ra chuoi da duoc chuyen doi thanh chu in hoa  |\n");
        printf("| 2. In ra chuoi da duoc chuyen doi thanh chu in thuong|\n");
        printf("| 0. Thoat chuong trinh                               |\n");
        printf("+-----------------------------------------------------+\n");
        printf("Moi ban lua chon: ");
        scanf("%d", &choice);
        getchar(); 

        if (choice == 0) {
            printf("Tam biet!\n");
            break;
        }

        printf("Nhap vao mot chuoi bat ky: ");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0'; 
        len = strlen(str);

        switch (choice) {
            case 1:
                for (i = 0; i < len; i++) {
                    str[i] = toupper(str[i]);
                }
                printf("Chuoi sau khi chuyen sang chu hoa: %s\n", str);
                break;

            case 2:
                for (i = 0; i < len; i++) {
                    str[i] = tolower(str[i]);
                }
                printf("Chuoi sau khi chuyen sang chu thuong: %s\n", str);
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    return 0;
}




