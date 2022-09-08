#include <stdio.h>
#include <stdlib.h>

float trapez()
{
    float a;
    float b;
    float height;
    int c;
    FILE *file;
    file = fopen("Images/Trapeze.txt", "r");
    if (file)
    {
        while ((c = getc(file)) != EOF)
            putchar(c);
        fclose(file);
    }
    printf("\033[0;35m");
    printf("\nWelcome to the Trapeze tool\n");
    printf("\033[0;37m");
    printf("\nType the length of a in cm: ");
    scanf("%f", &a);

    printf("Type in the length of b in cm: ");
    scanf("%f", &b);

    printf("Type in the height of h in cm: ");
    scanf("%f", &height);

    float result = (a + b) * height / 2;
    return result;
}

float dreiecksberechnung()
{
    float firstNumber;
    float secondNumber;

    int c;
    FILE *file;
    file = fopen("Images/Triangle.txt", "r");
    if (file)
    {
        while ((c = getc(file)) != EOF)
            putchar(c);
        fclose(file);
    }
    printf(" \033[0;35m");
    printf("\nWelcome to the Triangle tool\n");
    printf("\033[0;37m");
    printf("\nType the height of h in cm: ");
    scanf("%f", &firstNumber);

    printf("Type the length of a in cm: ");
    scanf("%f", &secondNumber);

    float result = (firstNumber * secondNumber) / 2;
    return result;
}

float KreisFlache()
{
    float pi = 3.14159;
    float radNum;
    int isRunning = 1;
    int c;
    FILE *file;
    file = fopen("Images/Circle.txt", "r");
    if (file)
    {
        while ((c = getc(file)) != EOF)
            putchar(c);
    
        printf("\033[0;35m");
        printf("\nWelcome to the Circle tool\n");
        printf("\033[0;37m");
        printf("\nType in the Radius in cm: ");
        scanf("%f", &radNum);
        float result = pi * (radNum * radNum);
        return result;
    }
}

float Quadrat()
{
    int c;
    FILE *file;
    file = fopen("Images/Square.txt", "r");
    if (file)
    {
        while ((c = getc(file)) != EOF)
            putchar(c);
        fclose(file);
    }
    float a;
    printf("\033[0;35m");
    printf("\nWelcome to the Square tool\n");
    printf("\033[0;37m");
    printf("\nType in length of a in cm: ");
    scanf("%f", &a);
    float result = a * a;
    return result;
}

float RechteckFlache()
{
    int isRunning = 1;
    int c;
    FILE *file;
    file = fopen("Images/Rectangle.txt", "r");
    if (file)
    {
        while ((c = getc(file)) != EOF)
            putchar(c);
    }

    float firstNumber;
    float secondNumber;
    printf("\033[0;35m");
    printf("\nWelcome to the Rectangle tool\n");
    printf("\033[0;37m");
    printf("\nType the length of a in cm: ");
    scanf("%f", &firstNumber);

    printf("Type the length of b in cm: ");
    scanf("%f", &secondNumber);

    float result = firstNumber * secondNumber;
    return result;
}