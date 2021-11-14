#include <stdio.h>
#include <stdlib.h>

int main()
{
   char nom[5];
    char prenom[10];
    int age;
    char sexe[19];
    char tele[14];
    printf(" nom:");
    scanf("%s",nom);
    printf(" prénom:");
    scanf("%s",prenom);
    printf(" sexe:");
    scanf("%s",sexe);
    printf(" l'age:");
    scanf("%d",&age);
    printf("telephone:");
    scanf("%s",&tele);
      printf(" nom:%s , prenom : %s ,  sexe : %s ,l'age : %d telephone : %s ",nom , prenom,sexe ,age ,tele);

    return 0;
}
