#include <stdio.h>
/*
main.c
Y4O4X0
Írjon telefonhasználati díjak számlázására alkalmas programot. 
Összesítse N db hívás után a telefonhasználati díjakat hívás típusonként (1-külföldi, 2-hálózaton kívüli, 3-hálózaton belüli). 
A hívási időt percben adja meg a felhasználó. Díjszabás: külföldi hívás 100 Ft/perc, hálózaton kívüli hívás 60 Ft/perc, hálózaton belüli hívás 40 Ft/perc.
Írja ki a számla végösszegét!
*/
int main()
{
    int N,i,tipus;
    double ido,sum_kf,sum_hk,sum_hb;

    sum_kf=sum_hk=sum_hb=0;
    printf("Hany adat lesz?");
    scanf("%d", &N);
    i=1;
    while (i<=N)
    {
        printf("%d. Hivas adatai: \n",i);
        printf("Tipus: [1-kulfoldi,2-halozaton kivuli,3-halozaton beluli]:");
        scanf("%d", &tipus);
        printf("Beszelgets ideje (percben):"); 
        scanf("%lf", &ido);

        switch (tipus)
        {
        case 1:
            sum_kf+=(ido*100);
            break;
        case 2:
            sum_hk+=(ido*60);
            break;
        case 3:
            sum_hb+=(ido*40);
            break;
        
        default:
            printf("Nem definialt!");
            break;
        }
        i++;
    }
    printf("\n A szamla vegosszege:%.2f(1)+%.2f(2+%.2f(3)=%.2f Ft\n",sum_kf,sum_hk,sum_hb,sum_kf+sum_hk+sum_hb);
    
    return 0;
}
