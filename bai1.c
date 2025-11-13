#include<stdio.h>
#include <string.h>
int main(){
	char str[100], i ; 
	int len, isPalindrome = 1;
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);  
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("La palindrome\n");
    else
        printf("Khong phai palindrome\n"); 
        
	return 0;
}


