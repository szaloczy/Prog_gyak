#include <stdio.h>
/*
main.c
Y4O4X0
Írjon C programot, amelyben bekér 2 egész értéket vesszővel elválasztva, majd megszámolja, hogy a 2 érték között hány darab prímszám van. Az eredményt írassa ki!
*/
int main()
{
    int a,b,ok,i=2,db=0,szam,oszto=0;
    char c;

    do
    {
        ok=1;
        printf("Adjon meg ket szamot:");
        if (scanf("%d,%d", &a, &b) != 2)
        {
            printf("\nHibas adat!");
            ok=0;
            while ((c = getchar())!= '\n');   
        }
        else if(b<a)
        {
            printf("\nHibas adat");
            ok=0;
            while((getchar()) != '\n');
        }

    } while (!ok);
    int ism=0;

    for (i = a; i <= b && i/2 ; i++)
    {
        ism++;
        if (i%ism==0)
        {
          db++;
        }
        
        
    }
    if (db)
    {
        /* code */
    }
    
    printf("Primek szama: %d",db);
    
    return 0;
}
