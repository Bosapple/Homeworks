/*Kullan�c�dan 10 tane say� isteyip, bu say�lardan hangilerinin
okul numaran�z�n bir b�leni oldu�unu bulan bir program yaz�n.*/
#include<stdio.h>
int main()
{
int a,b,c,d,bolen,dizi[10],dizi2[10];
bolen=0;
d=0;
for(a=0;a<=9;a++)
    {
    printf("%d. Sayiyi gir: ", a+1);
    scanf("%d", &dizi[a]);
    c=21100031016%dizi[a];
    if(c==0)
        {
        bolen++;
        dizi2[d]=dizi[a];
        d++;
        }
    }
printf("Bolen sayisi: %d", bolen);
printf("\n");
for(a=0;a<d;a++)
    {
    printf(" %d", dizi2[a]);
    }
    return 0;
}
