#include <stdio.h>
#include <stdlib.h>

/*1. Toplam eleman say�s�n� kullan�c�dan alarak bu say� kadar bellekten calloc fonksiyonunu kullanarak
gerekli yeri al�n�z. Ay�rd���n�z bu bellek alan�na eleman say�s� kadar de�eri kullan�c�dan al�n�z. Daha
sonra girilen en b�y�k de�eri tan�mlad���n�z i�aret�i de�i�keni kullanarak bulunuz ve ekrana
yazd�r�n�z  */

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
