#include <stdio.h>
#define PI 3.14

/*
main.c
Y4O4X0  
Kérje be egy kör sugarát, majd számítsa ki a területét és kerületét! Az eredményt írassa ki!
*/

int main()
{
    double r,terulet,kerulet;
    printf("Adja meg a kor sugarat:");
    scanf("%lf",&r);
    
    terulet=2*r*r;
    kerulet=2*r*PI;

    printf("A kor terulete: %lf\n",terulet);
    printf("A kor kerulete: %lf",kerulet);

    return 0;
}
