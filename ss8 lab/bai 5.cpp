#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	char chuoi[10][100];
	int n;
	
	printf("Nhap mang: ");
	for(int i = 0;i<10;i++)
	{
		printf("\nchuoi[%d] = ",i);
		scanf("%s", chuoi[i]);
	}
	int max = strlen(chuoi[0]);
	
	for(int i=0;i<10;i++)
	{
		if(strlen(chuoi[i])>max){
			max = i;
		}
	}
	
	printf("Chuoi co phan tu lon nhat la: %s", chuoi[max]);
	return 0;
	
	
	
}
