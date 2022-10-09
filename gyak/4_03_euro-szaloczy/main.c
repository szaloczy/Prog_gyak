#include <stdio.h>
#define N 12
/*
main.c
Y4O4X0
Az EURO árfolyamát egy negyedéven keresztül hetente nyilvántartjuk (HUF / EUR). Írjon C programokat az alábbi kérdések megválaszolására.
a) Olvasson be 12 valós értékű (pl. 408.15) adatot egy tömbbe ellenőrzött módon. 
Hibás adat megadása esetén a program kérje be ismét az elemet és írja ki az alábbi karakterláncot: Hibas adat. Adja meg ujra!
Az elemek beolvasása után írja ki, hogy hányszor volt a negyedévben 400 Ft alatt az árfolyam értéke!
Példa output: Az arfolyam erteke 5 alkalommal volt 400 alatt.
b) Monoton nőtt-e az árfolyam a negyedév során?
Példa output: A sorozat monoton novekvo: hamis.
c) Melyik héten volt a legmagasabb, és melyiken a legalacsonyabb az árfolyam? Melyek voltak ezek a szélsőértékek?
Példa output: 
Az arfolyam a 11. heten volt a legmagasabb 414.28 ertekkel es a 4. heten a legalacsonyabb 395.69 ertekkel.
d) Mennyi az adott negyedévre vonatkozó átlagos árfolyam érték? Előjelhelyesen írja ki, hogy az egyes adatok mennyivel térnek el az átlagtól. 
Ezt a feladatot pointer használatával is oldja meg.
Példa output:
Atlagos arfolyam: 402.16
1. elem atlagtol valo elterese: -11.01
2. elem atlagtol valo elterese: -6.19
(etc.)

Az egyes részfeladatok megoldása során írassa ki az eredményeket!
*/
int main()
{
    double tm[N];
    int i,ok;
    char c;
    int db = 0,limit = 400,talalt = 0;
    

    printf("HUF/EUR arfolyamok:\n");
    for (int i = 0; i < N; i++)
    {
        do
        {
           ok=1;
           printf("%d. ertek: ",i+1);
           if (scanf("%lf", &tm[i]) != 1)
           {
            printf("Hibas adat.Adja meg ujra");
            ok = 0;
            while ((c = getchar()) != '\n');
           }
           
        }while(!ok || tm[i] < 370 || tm[i] > 420);
    }

    for (int i = 0; i < N; i++)
    {
        if(tm[i]<limit)
        {
           db++;
        }
    }
    printf("Az arfolyam erteke %d alkalommal volt %d alatt",db,limit);

    for (int i = 0; i < N && ! talalt; i++)
    {
        if(tm[i]<tm[i-1])
        {
            talalt=1;
        }
    }
    printf("\nA sorozat monoton novo: %s",!talalt? "igaz" : "hamis");

    double max=tm[0];
    int maxindex;
    for (int i = 0; i < N; i++)
    {
       
        if (tm[i]>max)
        {
            max=tm[i];
             maxindex=i;
        }
        
    }

    double min=tm[0];
    int minindex; 

    for (int i = 0; i < N; i++)
    {
        
        if (tm[i]<min)
        {
            min=tm[i];
            minindex=i;
        }
       
    }
    printf("\nAz arfolyam a %d. heten volt a legmagasabb %.2lf ertekkel es a %d heten a legalacsonyabb %.2lf ertekkel.",maxindex+1,max,minindex+1,min);

    double atlag=0.0,*p;

    for (int i = 0; i < N; i++)
    {
        atlag+=tm[i];
    }
    
    atlag/=N;
    printf("\nAtlagos arfolyam: %.2lf",atlag);
    for (int i = 0; i < N; i++)
    {
       printf("\n%d. elem atlagtol valo elterese: %.2lf",i+1,atlag-tm[i]);
    }
    
    
    return 0;
}
