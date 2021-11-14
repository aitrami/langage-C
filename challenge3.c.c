#include <stdio.h>
#include <stdlib.h>

int main()
{
   float m ,mil;

    printf("  distance en Metre  : \n " );
    scanf("%f",&m);
    mil = m * 1.609;

    printf(" distance en Mile  est %.2f mile : \n ",mil );


    return 0;
}

