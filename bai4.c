#include<stdio.h>
#include<string.h>
int main(){
	char str[200], findchar;
	int len, i, j;
	
	printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    len = strlen(str);
    
   	printf("Nhap vao ky tu muon xoa: ");
   	scanf("%c",&findchar);
   	
	
	for (i = 0; i < len; i++){
		if (str[i]==findchar){
			for(j=i; j < len; j++){
				str[j] = str[j+1];
			}
		}
	}
	
	printf("Chuoi sau khi xoa ki tu '%c' la: %s", findchar, str);
	return 0;
}


