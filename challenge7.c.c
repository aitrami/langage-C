#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b ;
  int som, mut , sous;
  float op , divis;
  printf("entrez a:")
  scanf("%d",&a);
  printf("entrez b: ");
  scanf("%d",&b);
   som = a + b ;
   mut = a * b;
   divis = a / b;
   op = a%b;
    sous = a - b;

     printf("somme est %d\n soustraction est= %d\n multiplication = %d\n division= %.2f\n reste = %.2f" , som ,mut ,divis ,op , sous);
}
