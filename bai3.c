#include<stdio.h>
#include<string.h>
int main(){
	char str1[300];
	char str2[100];
	printf("Nhap vao chuoi thu nhat: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';
	
	printf("Nhap vao chuoi thu hai: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';
	
	strcat(str1,str2);
	
	printf("Mang sau khi noi voi nhau: %s",str1);
	return 0;
}


