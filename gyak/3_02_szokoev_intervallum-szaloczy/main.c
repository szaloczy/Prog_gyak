#include <stdio.h>
#include <stdbool.h>

/*
main.c
Y4O4X0
Kérjen be vesszővel elválasztva két évszámot, majd számolja meg az intervallumba eső szökőévek számát. Az eredményt írassa ki!
*/

int main()
{
    int a, b, szokoev, i;
    bool ok=false;

    do
    {
        ok=true
        printf("Adjon meg ket evszamot rendre(a,b):");

        if (scanf("%d,%d", &a, &b) != 2)
        {
            printf("Hibas adatok!\n");
            while (getchar() != '\n');
            ok = false;
        }
        

    } while (!ok);

    for (i = a; i <= b; i++)
    {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
        {
            szokoev++;
        }
    }
    printf("szokoev szama: %d", szokoev);

    return 0;
}
