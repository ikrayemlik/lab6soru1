#include <stdio.h>
#include <stdlib.h>

/*1. Toplam eleman sayýsýný kullanýcýdan alarak bu sayý kadar bellekten calloc fonksiyonunu kullanarak
gerekli yeri alýnýz. Ayýrdýðýnýz bu bellek alanýna eleman sayýsý kadar deðeri kullanýcýdan alýnýz. Daha
sonra girilen en büyük deðeri tanýmladýðýnýz iþaretçi deðiþkeni kullanarak bulunuz ve ekrana
yazdýrýnýz  */

int main() {
int *p;
int n,enb;
int i,dizi[100];
printf("eleman sayisini giriniz");	
scanf("%d",&n);	
p=(int *)calloc(n,sizeof(int));
p=dizi;		
printf("elemanlari giriniz\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d. eleman : ",i+1);
		scanf("%d",&dizi[i]);
	
	}
enb=*p;	
for(i=0;i<n;i++)
{
if(enb<*(p+i))
{
	enb=*(p+i);
	}
		
	}	
	printf("en buyuk eleman: %d\n",enb);
	
	free(p);
	
	
	
	
	
	return 0;
}
