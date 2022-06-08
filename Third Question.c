/*8 sayili 2 dizi al, bunlarý kendi aralarinda çarp ve topla olusan yeni iki dizinin kendi aralarinda
 modlarini al, eger modlari 5'ten kucuk ise 0, buyuk ise 1 yazdir. Son olarak kalite kontrol yap*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	int dizi[8],dizi2[8];
	int dizi3[8],dizi4[8],dizi5[8];
	e=0;
	d=0;
	for(a=0;a<=7;a++)
        {
        printf("%d. Sayiyi gir: ", a+1);
        scanf("%d", &dizi[a]);
        }
    for(a=0;a<=7;a++)
    {
        printf("%d. Sayiyi gir: ", a+1);
        scanf("%d", &dizi2[a]);
        dizi3[a]=(dizi2[a]*dizi[a])*(3/2);
        dizi4[a]=(dizi2[a]+dizi[a]);
        if(dizi3[a]<=dizi4[a])
        {
        dizi5[a]=dizi4[a]%dizi3[a];
        }
        else
        {
        dizi5[a]=dizi3[a]%dizi4[a];
        }
    }
    for(a=0;a<=7;a++)
    {
        if(dizi5[a]<5)
        {
        dizi5[a]=0;
        d++;
        }
        else
        {
        dizi5[a]=1;
        e++;
        }
    printf("%d", dizi5[a]);
    }
printf("\nUyumluluk faktoru: %d", e);
printf("\nUyumsuzluk faktoru: %d", d);
if(e==8||e==7)
    {
    printf("\nUrun A kalitededir.");
    }
else
    {
    if(e==6||e==5)
        {
        printf("\nUrun B kalitededir.");
        }
    else
        {
        if(e==4||e==3)
            {
            printf("\nUrun C kalitededir.");
            }
        else
            {
            printf("\nUrun kalitesizdir, uyumsuzlar tarafina gonderiliyor.");
            }
        }
    }
	return 0;
}
