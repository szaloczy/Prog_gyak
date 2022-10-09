#include <stdio.h>

/*
main.c
Y4O4X0
Írjon C programot egy beolvasott N érték faktoriálisának kiszámítására, és írja ki az eredményt! 
Tesztelje, hogy mekkora N esetén fér el az eredmény int típusú változóban! 
A beolvasásnál korlátozza N értékét ennek megfelelően. 
A feladatot végezze el úgy is, hogy az eredményt long típusú változóban tárolja!
Figyeljen arra, hogy 0! = 1.
*/

int main()
{
    int szam,i,fakt;

    printf("Adjon meg egy szamot:");
    scanf("%d",&szam);

    fakt=1;
    if(szam>=0 && szam<17)
    {
    for (i = 1; i <= szam; i++)
    {
        fakt*=i;
    }
    printf("%d",fakt);
    }
    else
    {
        printf("Invalid input");
    }
    
    
     
    return 0;
}
