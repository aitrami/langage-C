#include <stdio.h>
#include <stdlib.h>

int main()
{

   float f ,c;
    printf(" temp�rature en Fahrenheit : \n " );
    scanf("%f",&f);
    c = (f-32)/1.8;
    if(c<=1){
     printf(" tr�s froid  %.2f C : \n ",c);
   }
   else if(c>2 && c<=19){
        printf(" froid %.2f C : \n ",c);
   }

    else if(c > 19 && c<=30){
        printf(" chaud %.2f C : \n ",c); }
     else if ( c>30)

        printf(" tr�s  chaud %.2f C : \n ",c);
}
