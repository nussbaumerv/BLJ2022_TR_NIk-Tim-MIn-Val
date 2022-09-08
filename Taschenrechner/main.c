#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "geometry.h"

int main(int argc, char **argv)
{
     char userInput = 0;
     unsigned short isRunning = 1;
     int chooseFunction = 0;
     float result = 0;
     unsigned short choosing = 1;

     // Sets the text colour Yellow
     printf("\033[0;33m");

     // Printing Title Screen (ASCII Art)
     int c;
     FILE *file;
     file = fopen("Images/Title.txt", "r");
     if (file)
     {
          while ((c = getc(file)) != EOF)
               putchar(c);
          fclose(file);
     }
     // Sets backt to Black
     printf("\033[0;37m");

     printf("\nWelcome to our Calculator\n");

     while (isRunning)
     {
          fflush(stdin);
          printf("\nEnter S to start or X to exit: ");
          scanf("%c", &userInput);
          fflush(stdin);
          system("cls");

          if (userInput == 's' || userInput == 'S')
          {

               printf("What tool do you want to use?\n");

               printf("\nThese are our available Tools: ");
               printf("\n1 = Addition\n2 = Subtraction\n3 = Multiplication\n4 = Division\n5 = Exponent\n6 = Factorial\n7 = Square Root\n");
               printf("\n8 = Triangle\n9 = Rectangle\n10 = Circle\n11 = Square\n12 = Trapez\n");

               do
               {
                    choosing = 1;
                    chooseFunction = 0;
                    printf("Type in a command: ");
                    scanf("%d", &chooseFunction);
                    fflush(stdin);
                    system("cls");

                    switch (chooseFunction)
                    {
                    case 1:
                         result = addition();
                         choosing = 0;
                         break;
                    case 2:
                         result = subtraktion();
                         choosing = 0;
                         break;
                    case 3:
                         result = multiplikation();
                         choosing = 0;
                         break;
                    case 4:
                         result = division();
                         choosing = 0;
                         break;
                    case 5:
                         result = exponenten();
                         choosing = 0;
                         break;
                    case 6:
                         result = fakultat();
                         choosing = 0;
                         break;
                    case 7:
                         result = wurzeln();
                         choosing = 0;
                         break;
                    case 8:
                         result = dreiecksberechnung();
                         choosing = 0;
                         break;
                    case 9:
                         result = RechteckFlache();
                         choosing = 0;
                         break;
                    case 10:
                         result = KreisFlache();
                         choosing = 0;
                         break;
                    case 11:
                         result = Quadrat();
                         choosing = 0;
                         break;
                    case 12:
                         result = trapez();
                         choosing = 0;
                         break;
                    default:
                         printf("Please try again!:\n");
                         break;
                    }
               } while (choosing);

               printf("Result: %.2f\n", result);
               printf("------------------------------------------\n");
          }
          else if (userInput == 'x' || userInput == 'X')
          {
               printf("\033[0;36m");
               printf("Thanks for using our programm\n");
               printf("Made By -> Timofey, Valentin, Nikola, Minh\n");
               isRunning = 0;
          }
          else
          {
               printf("Please try Again!:\n");
          }
     }
     system("pause");
     return (EXIT_SUCCESS);
}
