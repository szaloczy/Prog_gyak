#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
main.c
Y4O4X0
Írjon C programot, amely kiszámítja a háromszög területét oldalainak megadásával. 
Használja a Hérón képletet: t² = s(s-a)(s-b)(s-c), ahol a, b, c a háromszög oldalainak a hossza és s a kerület fele.
Írassa ki a terület és a kerület értékét is!
Ügyeljen a változók típusára! A terület meghatározásához használja a négyzetgyökvonást végrehajtó függvényt: double sqrt(double num). 
Ennek deklarációját a math.h standard header állomány tartalmazza.
 */

int main()
{
    int a,b,c,s,terulet,kerulet;
    printf("Adja meg aharomszog oldalait rendre(a,b,c):");
    scanf("%d%d%d",&a,&b,&c);

    kerulet=a+b+c;
    s=kerulet/2;
    terulet=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("A haromszog kerulete: %d",kerulet);
    printf("\nA haromszog terulete: %d",terulet);

    return 0;
}
