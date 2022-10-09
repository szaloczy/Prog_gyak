#include <stdio.h>
#include <math.h>

    /*
    main.c
    Y4O4X0
    A double fabs(double) függvény segítségével állapítsa meg egy beolvasott szám abszolút értékét. Az eredményt írassa ki!
    */

int main()
{
    int szam,abszulotertek;

    printf("Adjon meg egy szamot:");
    scanf("%d",&szam);

    abszulotertek=fabs(szam);
    printf("A szam abszuloterteke: %d",abszulotertek);
    return 0;
}
