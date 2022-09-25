#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){

float radius, terulet, kerulet; 
 
    printf("\nAdja meg a kor sugarat: "); 
    scanf("%f", &radius); 
 
    if(radius>0)
    {
    terulet = PI * radius*radius; 
    kerulet=2*PI*radius;
    printf("\nA kor terulete: %.2f", terulet);
    printf("\nA kor kerulete: %.2f", kerulet);
    }
    else
        printf("Hibas ertek!");
    return 0;
}