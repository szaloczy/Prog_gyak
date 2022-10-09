#include <stdio.h>
#include <math.h>
/*
main.c
Y4O4X0
Készítsen C programot, amely kiszámítja két pozitív szám számtani és mértani közepét. 
A kód működjön valós szám esetén is. Az eredményt írassa ki!
*/
int main()
{
    double a,b,szamtan,mertan;
    int ok;
    char c;
    do
    {
        ok=1;
        printf("Adjon meg ket szamot:");
        if (scanf("%lf,%lf", &a, &b) !=2)
        {
            printf("hibas adatok!\n");
            while ((c = getchar()) != '\n')
            {
            ok=0;
            }
        }  
    } while (!ok);
    

    szamtan=(a+b)/2;
    mertan=sqrt(a*b);

    printf("A szam szamtani kozeoe: %.2lf",szamtan);
    printf("\nA szam mertani kozepe: %.4lf",mertan);
    return 0;
}