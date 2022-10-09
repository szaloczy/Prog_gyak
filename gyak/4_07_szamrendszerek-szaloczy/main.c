#include <stdio.h>
#include <stdbool.h>
/*
main.c
Y4O4X0
Kérjen be egy kettes számrendszerbeli számot és konvertálja át tízes számrendszerben adott számra. Az eredményt írassa ki!
*/
int main()
{
     int num, binaris_num, decimalis_num = 0, alap = 1, rem;  
    printf (" Adjon meg egy binaris szamot (0-1):\n");  
    scanf (" %d", &num);   
  
    binaris_num = num;

    while (num > 0)  
    {  
        rem = num % 10; 
        decimalis_num = decimalis_num + rem * alap;  
        num /=10;
        alap *= 2;  
    }  
  
     
    printf (" \nA szam tizes szamrendszerben %d \t", decimalis_num);
    
    return 0;
}
