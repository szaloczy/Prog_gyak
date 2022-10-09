#include <stdio.h>
#define N 8
/*
main.c
Y4O4X0
Írjon C programot, amely a felhasználó által megadott karaktersorozatról eldönti, hogy érvényes (valid/invalid) C azonosító-e. Az input max. 8 hosszú legyen.

Érvényes a C azonosító akkor, ha igazak az alábbiak:
Tartalmazhat betűket (kis- és nagybetűket egyaránt), számjegyeket és aláhúzásokat, de az első karakternek betűnek vagy aláhúzásnak kell lennie. 
A kulcsszavak (int, while stb.) nem használhatók azonosítóként.

Példa input, ha érvényes C azonosító:
counter
Példa output:
valid

Példa input, ha nem érvényes C azonosító:
12counter
Példa output:
invalid
*/

int main()
{
    char ch_tm[N];
    int meret=sizeof(ch_tm)/sizeof(char);
    printf("Adjon meg egy karaktersorozatot:");
    scanf("%s\n", &ch_tm);
    printf("%s",ch_tm);

    
    


    return 0;
}
