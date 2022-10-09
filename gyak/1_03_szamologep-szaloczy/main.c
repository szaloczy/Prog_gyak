#include <stdio.h>

/*
main.c
Y4O4X0
Írjon C programot, amely bekér egy műveletet és elvégzi a számítást.
Támogatott műveletek: összeadás, kivonás, szorzás, osztás, modulo.
Példa input:
5+2
Példa output:
*/

int main()
{
    int a,b;
    char op;
    printf("Adjon meg egy szamot egy muveleti jelet es meg egy szamot:");
    scanf("%d%c%d",&a,&op,&b);

    switch (op)
    {
    case '+':
        printf("A ket szam osszege: %d",a+b);
        break;
    case '-':
        printf("A ket szam kulonbsege: %d",a-b);
        break;
    case '*':
        printf("A ket szam szorzata: %d",a*b);
        break;
    case '/':
        printf("A ket szam hanyadosa: %d",a/b);
        break;    
    case '%':
        printf("A ket szam osszege: %d",a%b);
        break;
    default:
        printf("Hibas adat!");
        break;
    }
   
    return 0;
}
