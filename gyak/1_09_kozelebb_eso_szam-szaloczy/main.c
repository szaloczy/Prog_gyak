#include <stdio.h>
    /*
    Írjon C programot, amely beolvas egy valós (double típusú) számot és visszaadja a hozzá legközelebb eső kisebb ill. nagyobb egész számot. 
    Felhasználandó függvények: double ceil(double) ; double floor(double).
    */
int main()
{
    double szam,c,f;
    printf("Adjon meg egy szamot:");
    scanf("%lf",&szam);

    c=ceil(szam);
    f=floor(szam);

    printf("\n%.1lf",f);
    printf("\n%.1lf",szam);
    printf("\n%.1lf",c);
    return 0;
}
