#include <stdio.h>
/*
main.c
Y4O4X0
Írjon C programot, amely bekér egy egész számot, és kiírja, hogy a megadott szám prímszám-e.

Példa input prímszámra:
2017
Példa output prímszámra:
2017 is prime.

Példa input nem prímszámra:
4605
Példa output nem prímszámra:
4605 is not prime.
*/
int main()
{
    int szam,oszto,i,db=0;
    printf("Adjon meg egy szamot:");
    scanf("%d", &szam);

    oszto=1;
    for (i = 1; oszto <= szam ; i++)
    {
        if(szam % oszto == 0)
        {
            db++;
        }
        oszto++;
    }
    if(db == 2){
        printf("%d is prime", szam);
    }
    else
    {
        printf("%d is not prime", szam);
    }
    return 0;
}
