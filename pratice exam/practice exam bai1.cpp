#include<stdio.h>

int main(){
	int n,tram,chuc,donvi;
	printf("Nhap vao 3 chu so N: ");
	scanf("%d", &n);
	if(n>999 || n<100){
	
		printf("Nhap sai chu so: ");
	}else{
		donvi = n%10;
		chuc = (n/10)%10;
		tram = n/100;
		
		printf("Ba chu so la: %d %d %d\n",tram,chuc,donvi);
		if(tram == 1)
		{
			printf("One");
		}else if(tram == 2){
			printf("Two");
		}else if(tram == 3){
			printf("Three");
		}else if(tram == 4){
			printf("Four");
		}else if(tram == 5){
			printf("Five");
		}else if(tram == 6){
			printf("Six");
		}else if(tram == 7){
			printf("Seven");
		}else if(tram == 8){
			printf("Eight");
		}else if(tram == 9)
		{
			printf("Nine");
		}
		
	
		if(chuc == 1)
		{
			printf("One");
		}else if(chuc == 2){
			printf("Two");
		}else if(chuc == 3){
			printf("Three");
		}else if(chuc == 4){
			printf("Four");
		}else if(chuc == 5){
			printf("Five");
		}else if(chuc == 6){
			printf("Six");
		}else if(chuc == 7){
			printf("Seven");
		}else if(chuc == 8){
			printf("Eight");
		}else if(chuc == 9)
		{
			printf("Nine");
		}
		
		if(donvi == 1)
		{
			printf("One");
		}else if(donvi == 2){
			printf("Two");
		}else if(donvi == 3){
			printf("Three");
		}else if(donvi == 4){
			printf("Four");
		}else if(donvi == 5){
			printf("Five");
		}else if(donvi == 6){
			printf("Six");
		}else if(donvi == 7){
			printf("Seven");
		}else if(donvi == 8){
			printf("Eight");
		}else if(donvi == 9)
		{
			printf("Nine");
		}
		
		
		
			
		
		
	}
	return 0;
}
