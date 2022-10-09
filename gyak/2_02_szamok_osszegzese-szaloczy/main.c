#include  <stdio.h>
/*
main.c
Y4O4X0
Kérjen be egy számot (N), és összegezze a számokat 1-től N-ig! Az eredményt írassa ki!

Példa input:
8
Példa output:
36
*/
int main()
{
    int szam,sum=0,i;
    printf("Adjon meg egy szamot:");
    scanf("%d",&szam);

    for (i = 1; i <= szam; i++)
    {
        sum+=i;
    }
    printf("Sum: %d",sum);
    
    return 0;
}