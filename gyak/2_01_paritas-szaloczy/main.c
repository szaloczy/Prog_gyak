#include <stdio.h>
/*
main.c
Y4O4X0
Kérjen be egy számot, és döntse el róla hogy páros vagy páratlan! Az eredményt írassa ki!

Példa input páratlan számra:
5
Példa output:
odd

Példa input páros számra:
44
Példa output:
even
*/
int main()
{
    int szam;
    printf("Adjon meg egy szamot:");
    scanf("%d",&szam);

    if (szam%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    
    return 0;
}
