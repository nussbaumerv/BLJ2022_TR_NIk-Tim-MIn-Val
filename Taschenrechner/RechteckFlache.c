#include <stdio.h>
#include <stdlib.h>

float RechteckFlache(){
    int isRunning = 1;
     int c;
        FILE *file;
        file = fopen("Rectangle.txt", "r");
        if (file)
        {
            while ((c = getc(file)) != EOF)
                putchar(c);
        }
         
    float firstNumber;
    float secondNumber;

    printf("\nType the length of the first side in cm: ");
    scanf("%f", &firstNumber);

    printf("Type the length of second side in cm: ");
    scanf("%f", &secondNumber);

    float result = (firstNumber * firstNumber);
    return result;
}