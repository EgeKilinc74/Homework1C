#include <stdio.h>

int main(){
	
	int a;
	int b;
	
	printf("Kucuk sayiyi giriniz:");
	scanf("%d",&a);
	printf("Buyuk sayiyi giriniz:");
	scanf("%d",&b);

	while(a<=b){
		
		
		printf("%d\n",a);
		a++;
		
		
	}

	return 0;
}
