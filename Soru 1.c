#include <stdio.h>
#include <stdlib.h>

int main() {


int len, i, aranan, bayrak = -1, index;

// Kullan�c�dan dizinin boyutunu al�n�r.
printf("Dizinin boyutunu giriniz:");
scanf("%d",&len);

// Dizinin boyutu kadar bellekten yer ayr�l�r.
int*arr=(int*)malloc(len*sizeof(int));

// Kullan�c�dan dizinin elemanlar� al�n�r.
for(i=0; i<len; i++)
{
	printf("Dizinin %d.elemanini giriniz:", i+1);
	scanf("%d",&arr[i]);
}

// Kullan�c�dan aranacak olan eleman al�n�r.
printf("Aramak istediginiz elemani giriniz:");
scanf("%d",&aranan);

// Dizi �zerinde arama yap�l�r.
for(i=0; i<len; i++)
{
	if(arr[i]==aranan)
	{
		// Aranan eleman dizide bulundu�unda bayrak de�i�keni 1 yap�l�r.
		bayrak = 1;
		index =i;
		break;
	}
}

// Bayrak de�i�keni kontrol edilerek aranan eleman�n dizide olup olmad��� belirtilir.
if(bayrak==1)
{
	printf("%d dizinin %d.indexsinde bulunmustur",aranan,index);
}
else 
{
	printf("%d dizide bulunamam��t�r",aranan);
}


	return 0;
}
