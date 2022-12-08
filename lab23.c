#include <stdio.h>

int main(){


int n=0;
int NewN=0;


	
	
	scanf("%d",&n);
	int a;
	int b;
	a= n;
		
		while(a>0){
		
			b=a%10;
			NewN=b+(NewN*10);
			a=a/10;
		
		
	}
	
				if (n==NewN) printf("Palindromik sayi");

				else printf("Palindromik sayi deðil");











return 0;
}
