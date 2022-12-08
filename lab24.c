#include <stdio.h>

int main(){
	
int n;
int counter=0;
int basamakTekrari=0;
int EnTekrarEden=0;	
int rakam;
int degisken;	
	
	scanf("%d",&n);
	
		while(n > 0){
			
			rakam = n%10;
			n=n/10;
			degisken=n;
			
			while(degisken>0){
				
				if(degisken%10==rakam){
						
					counter++;
				}
				
				if(counter>basamakTekrari){
					
					basamakTekrari=counter;
					EnTekrarEden=rakam;
				}
				
			}
			
				degisken=degisken/10;
		}
	
	
	
	return 0;
}
