#include <stdio.h>
#include <stdlib.h>
#include "Addition.h"
#include "Division.h"
#include "Exponenten.h"
#include "Subtraktion.h"
#include "Fakultat.h"
#include "Wurzeln.h"
#include "Multiplikation.h"

int main(int argc, char **argv)
{
     char firstInput;
     int isRunning = 1;
     printf("Welcome to our\n");

     while (isRunning)
     {
          fflush(stdin);
          printf("\nEnter Y to start or X to exit: ");
          scanf("%c", &firstInput);
          fflush(stdin);

          if (firstInput == 'y' || firstInput == 'Y')
          {
               char chooseFunction;
               printf("What tool do you wane use?\n");
               scanf("%c", &chooseFunction);
               fflush(stdin);

               if (chooseFunction == 'a' || chooseFunction == 'A')
               {
                    printf("%d\n", addition());
               }
               else if (chooseFunction == 's' || chooseFunction == 'S')
               {
                    printf("%d\n", subtraktion());
               }
               else if (chooseFunction == 'm' || chooseFunction == 'M')
               {
                    printf("%d\n", multiplikation());
               }
               else if (chooseFunction == 'd' || chooseFunction == 'D')
               {
                    printf("%f\n", division());
               }
               else if (chooseFunction == 'f' || chooseFunction == 'F')
               {
                    printf("%d\n", fakultat());
               }
               else if (chooseFunction == 'w' || chooseFunction == 'W')
               {
                    printf("%d\n", wurzeln());
               }
               else if (chooseFunction == 'e' || chooseFunction == 'E')
               {
                    printf("%d\n", exponenten());
               }
          }
          if (firstInput == 'x' || firstInput == 'X')

          {
               printf("Thanks for using our programm");
               isRunning = 0;
          }
     }
     system("pause");
     return (EXIT_SUCCESS);
}
