#include <stdio.h>

int main(){
	
	int n;
	int last;
	int first;
	int counter;
	int old;
	
	scanf("%d",&n);
	
	old=n;
	
		while(n>10){
			
			
			n=n/10;
			
		}
			
			last=old%10;
			first=n;
			
	printf("Son basamak:%d\n",last);
	printf("Ilk basamak:%d",first);
	
	
	
	
	return 0;
}
