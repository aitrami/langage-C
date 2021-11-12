#include <stdio.h>
#include <stdlib.h>
#define Pi 3.14
int main()
{
  int color;
  printf ("choose a color: \n1:red\n2:green\n3:rouge\n");
  scanf ("%d",&color);
  switch (color){

        case 1:
          printf("you have chosen the red color. \n");

      break;
       case 2:
         printf("you have choose the green color. \n");

      break;
        case 3:
          printf("Please,choose a color rouge 1 and 3. \n");
  }

      return 0;
}
