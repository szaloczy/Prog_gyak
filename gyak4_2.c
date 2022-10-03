#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    double tomb[]={289,5,292.6,290.2,295,5,300.4,300.3,302.5,303.3,303.5,299};
    int kicsi=0;
    int db=0;
    int meret = sizeof(tomb)/sizeof(double);

    for (int i = 0; i <meret; i++)
    {
        printf("\n A(z) %d. elem: %lf",i,tomb[i]);
    }
    for (int i = 0; i < meret; i++)
    {
        if (tomb[i]<300)
        {
           db++;
        }
        
    }
    printf("\n300 : %d",db);
    
    
    return 0;
}