#include <stdio.h>
/*
main.c
Y4O4X0
Írjon C programot, amely bekér egy számot, majd megszámolja annak egész osztóit. 
Az eredményt írassa ki!
*/
int main()
{
    int szam,oszto,db=0;
    printf("Adjon meg egy szamot:");
    scanf("%d", &szam);

    oszto=1;
    while (oszto<=szam)
    {
        if(szam%oszto==0)
        {
        db++;
        }
        oszto++;
    }
    printf("%d",db);
    
    
    return 0;
}
