#include <stdio.h>
/*
main.c
Y4O4X0
Írjon C programot, amely bekér egy karaktert, majd eldönti, hogy benne van-e az ábécében, illetve magánhangzó vagy mássalhangzó. Az eredményt írassa ki!

Példa input, ha a karakter része az ábécének és mássalhangzó:
t
Példa output, ha a karakter része az ábécének és mássalhangzó:
t mássalhangzó

Példa input, ha a karakter része az ábécének és magánhangzó:
o
Példa output, ha a karakter része az ábécének és magánhangzó:
o magánhangzó

Példa input, ha a karakter nem része az ábécének:
@
Példa output:
@ nincs az angol ABC-ben*/

int main()
{
    char betu;
    printf("Adjon meg egy karakter:");
    scanf("%c", &betu);

    if((betu >= 'a' && betu <= 'z') || (betu >='A' && betu <= 'Z'))
    {
       if (betu=='a' || betu=='A' || betu=='e' || betu=='E' || betu=='i' || betu=='I' || betu=='o' || betu=='O' || betu== 'u' || betu=='U')
       {
        printf("%c maganhagzo",betu);
       }
       else
       {
        printf("%c massalhangzo",betu);
       }
    }
    else
    {
        printf("%c nincs az angol ABC-ben",betu);
    }

    return 0;
}
