#include <stdio.h>

int main(){
	
	int n;
	int counter=0;
	
	
	scanf("%d",&n);
	
		while(n>0){
			
			n=n/10;
			counter++;
		}
	
	
	
	printf("%d",counter);
	
	
	
	
	
	
	return 0;
}
