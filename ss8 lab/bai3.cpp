#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	char chuoisr[10][100];
	
	printf("Nhap mang: ");
	for(int i = 0;i<10;i++)
	{
		printf("\nchuoi[%d] = ",i);
		scanf("%s", chuoisr[i]);
	}
	
	printf("cac phan tu cua mang\n");
	for(int i=0;i<10;i++)
	{
		printf("%s\n", chuoisr[i]);
	}
	return 0;
	
}
