#include <stdio.h>

int main(){
	
	float n;
	float sum=0;
	int i=2;

		
		scanf("%f",&n);	
		
			while(n>=i){
				
				
				sum=sum+(1/i);
				i=i+2;
				
			}
	
	
	
		printf("%f",sum);
	
	
	
	
	
	
	return 0;
}
