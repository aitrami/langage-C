#include <stdio.h>
#include <stdlib.h>

int main()
{
   int main()

   float x1,x2 ,y1,y2 ,mn;
   float call , cal2 , som1, som2;
    printf(" entrez x1: ");
    scanf("%f",&x1);

     printf(" entrez y1: ");
     scanf("%f",&y1);

     printf("entrez x2: ");
     scanf("%f",&x2);

     printf(" entrez y2: ");
     scanf("%f",&y2);

      som1 = x1-x2;
      som2 = y1 - y2;
      cal1 = pow(som1,2);
      cal2 = pow(som2,2);

      mn = sprt(cal1+cal2);
    printf(" la distance entre M et N est : %.2f",mn);
