#include <stdio.h>
/*
main.c
Y4O4X0
Ellenőrzött adatbeolvasással adjon meg egy intervallumot (alsóhatár < felsőhatár). 
Majd olvasson be N darab számot és számolja meg, hogy a megadott számok közül hány darab esik az intervallumba. Az eredményt írassa ki!
*/
int main()
{
    int also,felso,szam,ok,db=0;
    char c;
    do
    {
        ok=1;
        printf("Adjon meg egy also illetve felso hatart:");
        if (scanf("%d,%d", &also, &felso) != 2)
        {
            printf("Hibas adat!");
            while ((c = getchar()) != '\n')
            {
                ok=0;
            }
        }
    } while (!ok);

    printf("\nAdjon meg egy szamot!");
    
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &i);
        
        
      
    }
    printf("\nA megadott n: %d elemu tombben, ahol az alsohatar %d volt es a felsohatar pedig %d volt kerestem helyes ertekeket. \n\t%d helyes ertek volt!", szam, also, felso, db);
    
    return 0;
}
