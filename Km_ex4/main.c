#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km ,mil;

    printf("  distance en Mile  : \n " );
    scanf("%f",&mil);

     km = mil/ 1.609;
     printf(" distance en Metre  est %.2f km : \n ",km);


    return 0;
}

