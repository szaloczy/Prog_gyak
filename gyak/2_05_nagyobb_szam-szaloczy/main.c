#include <stdio.h>
/*
Kérjen be 2 számot, majd írja ki, hogy melyik a nagyobb. Ha a két szám egyenlő értékű, akkor írja ki, hogy "The given numbers are equal".
*/
int main()
{
    int a,b,ok;
    char c;
   
    do
    {
       ok=1;
       printf("Adjon meg ket szamot:");
       if (scanf("%d,%d", &a, &b) != 2)
       {
        printf("Hibas adat!\n");
        while ((c=getchar()) != '\n')
        {
            ok=0;
        }
       }
    } while (!ok);

    if(a>b)
    {
        printf("A(z) %d a nagyobb",a);
    }
    else if(b>a)
    {
        printf("A(z) %d a nagyobb",b);
    }
    else
    {
        printf("The given numbers are equal");
    }

    return 0;
}
