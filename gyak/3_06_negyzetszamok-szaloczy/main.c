#include <stdio.h>
/*
main.c
Y4O4X0
Írjon C programot, amely bekér egy pozitív egész számot, majd 1-től a megadott értékig megszámolja, hogy hány darab négyzetszám van. 
Az eredményt írassa ki!
*/
int main()
{
   int szam,i,db=0;
   printf("Adjon meg egy szamot:");
   scanf("%d", &szam);

   for (i = 1; i*i <= szam; i++)
   {
   db++;
   }
   printf("%d db negyzet szam van", db);
    return 0;
}
