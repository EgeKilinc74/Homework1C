#include <stdio.h>

int main(){
	
	int n;
	int last;
	int first;
	int counter;
	int old;
	int new;
	
	scanf("%d",&n);
	
	old=n;
	
		while(n>10){
			
			
			n=n/10;
			
		}
			
			last=old%10;
			first=n;
			
			printf("Son basamak:%d\n",last);
			printf("Ilk basamak:%d",first);
	
				old=n-(n%10);
				new=old;
				old=old/10;
	
		
	return 0;
}
