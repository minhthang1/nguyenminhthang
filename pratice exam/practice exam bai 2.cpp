#include<stdio.h>
#include<string.h>

void sapxep(char s[]){
	int n = strlen(s);
	int i,j;
	char tg;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(s[i]>s[j]){
				tg = s[i];
				s[i]=s[j];
				s[j]=tg;
			}
		}
	}
}

int main(){
	char s[20];
	printf("Nhap chuoi ki tu: ");
	scanf("%s", s);
	sapxep(s);
	printf("Ket qua la: %s\n", s);
	
	return 0;
}
