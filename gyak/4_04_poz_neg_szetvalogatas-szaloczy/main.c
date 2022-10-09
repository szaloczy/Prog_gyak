#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

/*
main.c
Y4O4X0
-1000 és 1000 közé eső számokkal ellenőrzött beolvasással töltsön fel egy 20 elemű integer tömböt, majd végezze el az alábbi feladatokat:
a) Válogassa szét a tömb elemeit pozitív és negatív számokra.
b) Számítsa ki a résztömbök átlagát.
c) Végül kérjen be egy számot, és döntse el, hogy eleme-e a tömbnek. Ha igen, írja ki azt is, hogy hányadik eleme az alábbi formában: A keresett ertek a tomb 5. eleme.
Ha nem eleme, akkor írja ki, hogy: A keresett ertek nem eleme a tombnek.
*/
int main()
{
   int tm[N], p_tomb[N],n_tomb[N];
   srand(time(0));

   int felso = 1000, also = -1000;
    double p_atlag = 0,n_atlag = 0;
   int p_szamok,n_szamok;

   p_szamok=n_szamok=0;

#pragma region  feltoltes

    for (int i = 0; i < N; i++)
    {
        tm[i]=(rand()%(felso-also+1)+also);
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d. erteke : %d\n",i+1,tm[i]);
    }
#pragma endregion
    
    for (int i = 0; i < N; i++)
    {
        if (tm[i]>=0)
        {
            p_tomb[p_szamok]=tm[i];
            p_szamok++;
        }
        else
        {
            n_tomb[n_szamok]=tm[i];
            n_szamok++;
        }
    }

    for (int i = 0; i < p_szamok; i++)
    {
       p_atlag+=p_tomb[i];
    }
    
    printf("\nA pozitiv tomb elemeinek atlaga: %.2lf",p_atlag / p_szamok);

    for (int i = 0; i < n_szamok; i++)
    {
        n_atlag+=n_tomb[i];
    }
    printf("\nA negativ tomb elemeinek atlaga: %.2lf",n_atlag / n_szamok);

    int szam=0,ok,talalt=0;
    char c;
    do
    {
        ok=1;
        printf("\nAdjon meg egy szamot:");
        if(scanf("%d", &szam) !=1)
        {
            printf("\nHibas adat!Add meg ujra:");
            ok=0;
            while ((c = getchar()) != '\n')
            {
            }
        }
    } while (!ok);

    int index;
    for (int i = 1; i < N && !talalt ; i++)
    {
        
        if (tm[i]==szam)
        {
            talalt=1;
            index=i;
        }
    }
   
    
    if (talalt)
    {
          printf("A keresett ertek a tomb %d. eleme",index+1);
    }
    else
    {
        printf("A keresett ertek nem eleme a tombnek");
    }
    return 0;
}
