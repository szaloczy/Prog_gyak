#include <stdio.h>
#include <math.h>
/*
main.c
Y4O4X0
Kérjen be 2 értéket vesszővel elválasztva, majd végezze el a hatványozást és írja ki az eredményt. Kezelje azt a lehetőséget is, ha a kitevő 0.
*/
int main()
{
    double a,b,ok,eredmeny;
    char c;
    do
    {
        ok=1;
        printf("Adjon meg 2 szamot vesszovel el valasztva rendre(a,b):");
        if (scanf("%lf,%lf", &a, &b) != 2)
        {
            printf("Hibas ertek!");
            while((c = getchar()) != '\n')
            {
                ok=0;
            }
        }
    } while (!ok);

    eredmeny=pow(a,b);
    printf("%.2lf",eredmeny);
    
    return 0;
}
