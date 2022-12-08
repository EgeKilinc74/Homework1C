#include<stdio.h>

int main(){
	
	int decimal,kalan,bolum;
	int binary[100],i=1,j;

	printf("Ondalik Sayi Giriniz: ");
	scanf("%d",&decimal);

		kalan = decimal;
		while(bolum!=0){
		binary[i++]= bolum % 2;
		bolum = bolum / 2;
	}

			printf("Ondalik Sayinin ikiliye Donusturulmus Hali %d: ",decimal);
			for(j = i -1 ;j> 0;j--)
				printf("%d",binary[j]);

	return 0;
}
