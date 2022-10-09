#include <stdio.h>
#include <math.h>

/*
main.c
Y4O4X0
Írjon C programot, amely a derékszögű háromszög két befogójának ismeretében kiszámítja az átfogóját. 
A két befogó értékét a felhasználó adja meg. 
A négyzetreemeléshez használja a math.h -ban deklarált double pow(double, double) függvényt. Az eredményt írassa ki!
*/

int main()
{
    int a,b,atfogo;
    printf("Adja meg a ket befogot:");
    scanf("%d%d",&a,&b);

    atfogo=sqrt(pow(a,2)+pow(b,2));
    printf("A haromszog atfogoja: %d",atfogo);
    
    return 0;
}
