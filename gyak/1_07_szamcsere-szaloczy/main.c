#include <stdio.h>

    /*
    main.c
    Y4O4X0
    Kérjen be 2 db egész számot, majd cserélje fel őket. Az eredményt írassa ki!
    Példa input:
    5, 6
    Példa output:
    6, 5
    */

int main()
{
    int a,b,temp;
    printf("Adjon meg ket szamot:");
    scanf("%d, %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d, %d",a,b);
    return 0;
}
