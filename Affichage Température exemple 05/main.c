#include <stdio.h>
#include <stdlib.h>

int main()
{

   float f ,c;
    printf(" température en Fahrenheit : \n " );
    scanf("%f",&f);
    c = (f-32)/1.8;
    if(c<=1){
     printf(" très froid  %.2f C : \n ",c);
   }
   else if(c>2 && c<=19){
        printf(" froid %.2f C : \n ",c);
   }

    else if(c > 19 && c<=30){
        printf(" chaud %.2f C : \n ",c); }
     else if ( c>30)

        printf(" très  chaud %.2f C : \n ",c);
}
