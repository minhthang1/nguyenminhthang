#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	char chuoi1[100],chuoi2[100];
	printf("Nhap chuoi 1: ");
	scanf("%s", chuoi1);
	printf("Nhap chuoi 2: ");
	scanf("%s", chuoi2);
	int x = strcmp(chuoi1,chuoi2);
	if(x<0){
		printf("Chuoi 1 dung truoc 2",chuoi1,chuoi2);
	}else if(x>0){
		printf("Chuoi 1 dung sau 2",chuoi1,chuoi2);
		}else{
			printf("2 chuoi bang nhau");
			}
	}
	
