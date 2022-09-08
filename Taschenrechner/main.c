#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "KreisFlache.h"
#include "Dreiecksberechnung.h"
#include "Quadrat.h"
#include "RechteckFlache.h"
#include "trapez.h"

int main(int argc, char **argv)
{
     char firstInput;
     int isRunning = 1;
     int c;
        FILE *file;
        file = fopen("Images/Title.txt", "r");
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
          system("cls");

          if (firstInput == 's' || firstInput == 'S')
          {
               char chooseFunction;
               printf("What tool do you want to use?\n");

               printf("\nThese are our available Tools: \nA = Addition\nS = Subtraktion\nM = Multiplikation\nD = Division\nE = Exponenten\nF = Fakultat\nW = Wurzel\nT = Triangle\nR = Rectangle\nC = Circle\nQ = Square\nZ = Trapez\n");
               
               printf("Type character: ");
               scanf("%c", &chooseFunction);
               fflush(stdin);
               system("cls");

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
                    printf("\nResult: %.2fcm2\n", KreisFlache());
               }
                  else if (chooseFunction == 'q' || chooseFunction == 'Q')
               {
                    printf("Welcome to the Square tool\n");
                    printf("\nResult: %fcm2\n", Quadrat());
               }
               else if (chooseFunction == 'r' || chooseFunction == 'R')
               {
                    printf("Welcome to the Rectangle tool\n");
                    printf("\nResult: %.2fcm2\n", RechteckFlache());
               }
               else if (chooseFunction == 'z' || chooseFunction == 'Z')
               {
                    printf("Welcome to the Trapez tool\n");
                    printf("\nResult: %.2fcm2\n", trapez());
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
