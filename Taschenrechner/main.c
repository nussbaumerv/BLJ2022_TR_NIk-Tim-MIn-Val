#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "KreisFlache.h"
#include "Dreiecksberechnung.h"
#include "Quadrat.h"

int main(int argc, char **argv)
{
     char firstInput;
     int isRunning = 1;
     int c;
        FILE *file;
        file = fopen("Title.txt", "r");
        if (file)
        {
            while ((c = getc(file)) != EOF)
                putchar(c);
            fclose(file);
        }



     printf("\nWelcome to our Calculator\n");


     while (isRunning)
     {
          fflush(stdin);
          printf("\nEnter S to start or X to exit: ");
          scanf("%c", &firstInput);
          fflush(stdin);
          system("clear");

          if (firstInput == 's' || firstInput == 'S')
          {
               char chooseFunction;
               printf("What tool do you want to use?\n");

               printf("\nThese are our available Tools: \nA = Addition\nS = Subtraktion\nM = Multiplikation\nD = Division\nE = Exponenten\nF = Fakultat\nW = Wurzel\nT = Triangle\nC = Circle\nV = Viereck\n");
               
               printf("Type character: ");
               scanf("%c", &chooseFunction);
               fflush(stdin);
               system("clear");

               if (chooseFunction == 'a' || chooseFunction == 'A')
               {
                    printf("\nWelcome to the Addition tool\n");
                    printf("\nResult: %d\n", addition());
               }
               else if (chooseFunction == 's' || chooseFunction == 'S')
               {
                    printf("\nWelcome to the Subtraktion tool\n");
                    printf("\nResult: %d\n", subtraktion());
               }
               else if (chooseFunction == 'm' || chooseFunction == 'M')
               {
                    printf("\nWelcome to the Multiplikation tool\n");
                    printf("\nResult: %d\n", multiplikation());
               }
               else if (chooseFunction == 'd' || chooseFunction == 'D')
               {
                    printf("\nWelcome to the Division tool\n");
                    printf("\nResult: %f\n", division());
               }
               else if (chooseFunction == 'f' || chooseFunction == 'F')
               {
                    printf("\nWelcome to the Fakultat tool\n");
                    printf("\nResult: %d\n", fakultat());
               }
               else if (chooseFunction == 'w' || chooseFunction == 'W')
               {
                    printf("\nWelcome to the Wurzel tool\n");
                    printf("\nResult: %d\n", wurzeln());
               }
               else if (chooseFunction == 'e' || chooseFunction == 'E')
               {
                    printf("\nWelcome to the Exponenten tool\n");
                    printf("\nResult: %d\n", exponenten());
               }
               else if (chooseFunction == 't' || chooseFunction == 'T')
               {
                    printf("\nWelcome to the Triangle tool\n");
                    printf("\nFlaeche: %.2fcm2\n", dreiecksberechnung());
               }
                else if (chooseFunction == 'c' || chooseFunction == 'C')
               {
                    printf("Welcome to the Circle tool\n");
                    printf("\nResult: %f\n", KreisFlache());
               }
                  else if (chooseFunction == 'v' || chooseFunction == 'V')
               {
                    printf("Welcome to the Square tool\n");
                    printf("\nResult: %f\n", Quadrat());
               }
               printf("------------------------------------------\n");
          }
          if (firstInput == 'x' || firstInput == 'X')

          {
               printf("Thanks for using our programm\n");
               isRunning = 0;
          }
     }
     system("pause");
     return (EXIT_SUCCESS);
}
