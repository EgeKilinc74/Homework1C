#include <stdio.h>

int main(){
	
	int sayi;
	int sonuc=1;
	int i;
	
	scanf("%d",&sayi);
	
		for(i=2 ; i<=sayi ;i++){
		
			sonuc=sonuc*i;
		
		
		
	}
	
	
	printf("%d",sonuc);	
	
	
	
	
	
	
	return 0;
}
