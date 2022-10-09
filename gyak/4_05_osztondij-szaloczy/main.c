#include <stdio.h>
#define N 6
#include <stdbool.h>
/*
main.c
Y4O4X0
Az egyetemi hallgatóknak félévente 6 vizsgájuk van. Félév végén az elért tanulmányi átlag alapján ki szeretnénk számolni a hallgató ösztöndíját a következő félévre: 
3,5 alatt 0 Ft/hó, 
3,6-4,0 között 5eFt/hó, 
4,1-4,5 között 10eFt/hó és 
4,6-5,0 között 15eFt/hó. 
Írjon C programot, amely beolvassa egy hallgató vizsgajegyeit és eltárolja egy tömbben, kiszámítja a tanulmányi átlagot és kiírja az ösztöndíj havi összegét!

Példa input:
4
2
3
5
4
2

Példa output:
Tanulmanyi atlag: 3.33
Havi osztondij: 0
*/
int main()
{
    int tm[N];
    bool ok=false;
    double avg=0.0;

    for (int i = 0; i < N; i++)
    {
        do
        {
            ok=true;
            printf("Adja meg a tanulo osztalyzatait:");
            if (scanf("%d", &tm[i]) != 1)
            {
               printf("\nHiba, add meg ujra:");
               ok=false;
               while ((getchar()) != '\n');
            }
            else if(tm[i]<0 && tm[i]>5)
            {
                printf("\nHiba, add meg ujra:");
                ok=false;
                while ((getchar()) != '\n');  
            }
        } while (!ok);
    }

    for (int i = 0; i < N; i++)
    {
       avg+=tm[i];
    }
    avg/=N;
    
    printf("Tanulmanyi atlag: %.3lf",avg);
    
    if (avg<3.6)
    {
       printf("\nHavi osztondij: %d",0);
    }
    else if(3.5<avg && avg<4.1)
    {
        printf("\nHavi osztondij: %d",5000);
    }
    else if(4.0<avg && avg<4.6)
    {
        printf("\nHavi osztondij: %d",10000);
    }
    else if(avg>=4.6)
    {
        printf("\nHavi osztondij: %d",15000);
    }
    
    return 0;
}
