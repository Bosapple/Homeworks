#include<stdio.h>
int main()
{
int a,b,c,d,gun,hafta,ay,yil;
gun=7;
hafta=4;
ay=12;
yil=2022;
for(a=0;0<=yil;a++)
    {
    printf("Yil: %d\n", a);
    sleep(2);
    for(b=1;b<=ay;b++)
        {
        printf("  Ay: %d\n", b);
        sleep(2);
        for(c=1;c<=hafta;c++)
            {
            printf("   Hafta: %d\n", c);
            sleep(1);
            for(d=1;d<=gun;d++)
                 {
                printf("       Gun: %d\n", d);

                 }
            }
        }
    }
    return 0;
}
