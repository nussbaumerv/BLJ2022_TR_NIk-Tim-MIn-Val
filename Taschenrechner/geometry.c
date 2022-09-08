#include <stdio.h>
#include <stdlib.h>

float trapez()
{
    float a;
    float b;
    float height;
    int c;
    FILE *file;
    file = fopen("Trapeze.txt", "r");
    if (file)
    {
        while ((c = getc(file)) != EOF)
            putchar(c);
        fclose(file);
    }
    printf("Welcome to the Trapez tool\n");
    printf("\nType the length of a in cm: ");
    scanf("%f", &a);

    printf("Type the length of b in cm: ");
    scanf("%f", &b);

    printf("Type the height in cm: ");
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
    file = fopen("Triangle.txt", "r");
    if (file)
    {
        while ((c = getc(file)) != EOF)
            putchar(c);
        fclose(file);
    }
    printf("\nWelcome to the Triangle tool\n");
    printf("\nType the height of the triangle in cm: ");
    scanf("%f", &firstNumber);

    printf("Type the length of the base side in cm: ");
    scanf("%f", &secondNumber);

    float result = (firstNumber * firstNumber) / 2;
    return result;
}

float KreisFlache()
{
    float pi = 3.14159;
    float radNum;
    int isRunning = 1;
    int c;
    FILE *file;
    file = fopen("Circle.txt", "r");
    if (file)
    {
        while ((c = getc(file)) != EOF)
            putchar(c);

        printf("Welcome to the Circle tool\n");
        printf("\nRadius: ");
        scanf("%f", &radNum);
        float result = pi * (radNum * radNum);
        return result;
    }
}

float Quadrat()
{
    int c;
    FILE *file;
    file = fopen("Square.txt", "r");
    if (file)
    {
        while ((c = getc(file)) != EOF)
            putchar(c);
        fclose(file);
    }
    float a;
    printf("Welcome to the Square tool\n");
    printf("\nSide a: ");
    scanf("%f", &a);
    float result = a * a;
    return result;
}

float RechteckFlache()
{
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

    printf("Welcome to the Rectangle tool\n");
    printf("\nType the length of the first side in cm: ");
    scanf("%f", &firstNumber);

    printf("Type the length of second side in cm: ");
    scanf("%f", &secondNumber);

    float result = (firstNumber * firstNumber);
    return result;
}