#include<stdio.h>
#include<string.h>

int main(){
	char chuoi1[100],chuoi2[100];
	printf("Nhap chuoi 1: ");
	scanf("%s", chuoi1);
	printf("Nhap chuoi 2: ");
	scanf("%s", chuoi2);
	int n = strlen(chuoi1);
	int m = strlen(chuoi2);
	if(n>m){
		printf("Chuoi 1 co do dai lon hon : %s\n", chuoi1);
		}else{
		printf("Chuoi 2 co do dai lon hon: %s", chuoi2);
	}
}
