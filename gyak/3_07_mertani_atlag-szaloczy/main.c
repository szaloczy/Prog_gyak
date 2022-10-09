#include <stdio.h>
#include <math.h>
/*
main.c
Y4O4X0
Írjon C programot, amely bekér egy számot, és kiszámítja 1-től a megadott értékig lévő egész számok mértani átlagát. 
Az eredményt írassa ki!
*/

int main()
{
    int szam,i,db=0;
    int eredmeny=1;
    double gyok=0;
    double seged;
   
    printf("Adjon meg egy szamot:");
    scanf("%d", &szam);

    for (i = 1; i <= szam; i++)
    {
       eredmeny*=i;
    }


   //eredmeny=eredmeny-(eredmeny*eredmeny)/(szam*eredmeny);
    printf("\neredmeny: %.2lf",szam*(double)sqrt(eredmeny));

    return 0;
}
