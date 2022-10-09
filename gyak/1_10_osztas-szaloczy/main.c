#include <stdio.h>
    /*
    main.c
    Y4O4X0
    Írjon C programot, amely beolvas két egész számot, és kiírja az osztás eredményét az alábbi formában: osztandó / osztó = hányados, remainder: x. 
    Ugyanezt oldja meg valós (double típusú) számokkal is. Az osztási maradék kiszámításához használja a math.h double fmod(double, double) függvényét.
    Példa input:
    101, 2
    Példa output:
    101 / 2 = 50, remainder: 1
    */
int main()
{
    int a,b;
    
    printf("Adjon meg ket szamot:");
    scanf("%d%d",&a,&b);

    printf("%d / %d = %d, remainder: %d",a,b,a/b,a%b);

    double c,d;

    printf("\nAdjon meg ket szamot:");
    scanf("%lf%lf",&c,&d);

    printf("%.2lf / %.2lf = %.2lf, remainder: %d",c,d,c/d,(int)c%(int)d);

    return 0;
}
