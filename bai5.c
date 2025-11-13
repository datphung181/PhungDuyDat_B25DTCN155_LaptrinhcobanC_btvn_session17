#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[200], str2[200];
    int i;

    printf("Nhap chuoi thu nhat: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Nhap chuoi thu hai: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

  
    if (strlen(str1) != strlen(str2)) {
        printf("Khac nhau\n");
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++) {
        if (tolower(str1[i]) != tolower(str2[i])) {
            printf("Khac nhau\n");
            return 0;
        }
    }

    printf("Giong nhau\n");
    return 0;
}

