//Bir sayi giriniz eger bu sayi ciftse 0 dan o sayiya kadar ciftleri eðer tekse o sayidan 0 kadar sýraliyiniz en sonda ciftlerin toplami ve teklerin toplamiyla beraber hem cift hem tek toplamlarini basarak programi yavasca bitirip yeniden baslat
#include<stdio.h>
int main()
{
int a,b,c,bambam,tek,cift,toplam;
while(1)
{
system("cls");
fflush(stdout);
bambam=0;
b=0;
cift=0;
tek=0;
while(bambam==0)
    {
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a==0)
        {
        bambam=1;
        }
        else
        {
        if(a%2==0)
            {
            while(b<=a)
               {
               printf("%d \n", b);
               cift=cift+b;
               b=b+2;
               }
            }
            else
            {
            while(0<a)
               {
               tek=tek+a;
               printf("%d \n", a);
               a=a-2;
               }
            }
        }
     }
toplam=tek+cift;
printf("Sum of evens= %d\n", cift);
sleep(1);
printf("Sum of odds= %d\n", tek);
sleep(1);
printf("The program is over and sum of actions= %d \n", toplam);
sleep(2);
printf("Program reseting itself in...\n");
printf("3 \n");
sleep(1);
printf("2 \n");
sleep(1);
printf("1 \n");
sleep(1);
}


return 0;
}
