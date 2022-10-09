#include <stdio.h>
    /*
    main.c
    Y4O4X0
    Készítsen C programot, amely bekéri egy téglatest három oldalának hosszát és kiszámítja annak felszínét (A = 2 * (a*b + a*c + b*c)) és térfogatát (V = a*b*c).
    Az eredményt írassa ki!
    */
int main()
{
    int a,b,c,A,V;
    printf("Adja meg a teglatest 3 oldalat rendre(a,b,c):");
    scanf("%d%d%d",&a,&b,&c);

    A=2*(a*b+a*c+b*c);//Felszín számítás
    V=a*b*c;//Térfogat számítás

    printf("A teglatest felszine: %dcm2",A);
    printf("\nA tegéatest terfogata: %dcm3",V);
    return 0;
}
