#include <stdio.h>
#include <stdlib.h>

int addition()
{
    int result = 0;
    int addNum;
    int numbers;
    printf("\033[0;31m");
    printf("\nWelcome to the Addition tool\n");
    printf("\033[0;37m");
    printf("How many numbers do you want to add up?\n");
    scanf("%d", &numbers);
    fflush(stdin);

    while (numbers > 0)
    {
        printf("Type in a Digit: ");
        scanf("%d", &addNum);
        fflush(stdin);
        result = result + addNum;
        numbers--;
    }

    return result;
}

int subtraktion()
{
    int result = 0;
    int subNum;
    int numbers;
    printf("\033[0;31m");
    printf("\nWelcome to the Subtraction tool\n");
    printf("\033[0;37m");
    printf("How many numbers do you want to subtraction?\n");
    scanf("%d", &numbers);
    fflush(stdin);

    while (numbers > 0)
    {
        printf("Type in a Digit: ");
        scanf("%d", &subNum);
        fflush(stdin);
        if (result == 0)
        {
            result = subNum;
        }
        else
        {
            result = result - subNum;
        }
        numbers--;
    }

    return result;
}

int multiplikation()
{
    int result = 0;
    int mulNum;
    int numbers;
    printf("\033[0;31m");
    printf("\nWelcome to the Multiplication tool\n");
    printf("\033[0;37m");
    printf("How many numbers do you want to multiply?\n");
    scanf("%d", &numbers);
    fflush(stdin);

    while (numbers > 0)
    {
        printf("Type in a Digit: ");
        scanf("%d", &mulNum);
        fflush(stdin);
        if (result == 0)
        {
            result = mulNum;
        }
        else
        {
            result = result * mulNum;
        }
        numbers--;
    }

    return result;
}

float division()
{
    float result = 0;
    float divNum = 0;
    float numbers;
    float num = 1;
    printf("\033[0;31m");
    printf("\nWelcome to the Division tool\n");
    printf("\033[0;37m");
    printf("How many numbers do you want to divide?\n");
    scanf("%f", &numbers);
    fflush(stdin);
    while (numbers > 0)
    {
        printf("Type in a Digit: ");
        scanf("%f", &divNum);
        fflush(stdin);
        if (divNum == 0)
        {
            printf("\nUndefined\n");
            return 0;
        }
        else if (num == 1)
        {
            num = divNum / num;
        }
        else
        {
            num = num / divNum;
        }
        numbers--;
    }
    result = num;
    return result;
}

int exponenten()
{
    int Number = 0;
    int Exponent = 0;
    printf("\033[0;31m");
    printf("\nWelcome to the Exponent tool\n");
    printf("\033[0;37m");
    printf("Type in a Digit: ");
    scanf("%d", &Number);
    fflush(stdin);
    printf("Insert an Exponent: ");
    scanf("%d", &Exponent);
    fflush(stdin);
    int result = Number;
    if (Number == 0)
    {
        return 0;
    }
    else if (Exponent == 0)
    {
        return 1;
    }
    else
    {

        if (Exponent < 0)
        {
            result = 1;
            for (Exponent < 0; ++Exponent;)
            {
                result = result / Number;
            }
        }
        else
        {
            for (Exponent > 1; --Exponent;)
            {
                result *= Number;
            }
        }
    }
    return result;
}

int wurzeln()
{
    short calculating = 1;
    short is_running = 1;
    int i = 1;
    printf("\033[0;31m");
    printf("\nWelcome to the Square Root tool\n");
    printf("\033[0;37m");
    while (is_running)
    {

        int input = 0;
        printf("Type in a Digit:");
        scanf("%d", &input);
        fflush(stdin);

        if (input < 1)
        {

            printf("Please try again!\n");
        }
        else
        {
            while (calculating)
            {
                int compare = i * i;
                if (compare == input)
                {
                    return i;
                    calculating = 0;
                }
                if (compare > input)
                {
                    printf("Couldn't get the square root of %d\n", input);
                    return 0;
                    calculating = 0;
                }
                ++i;
            }
        }
        is_running = 0;
    }
}

int fakultat()
{
    int i, fact = 1, number;
    printf("\033[0;31m");
    printf("\nWelcome to the Factorial tool\n");
    printf("\033[0;37m");
    printf("Type in a digit: ");

    scanf("%d", &number);
    fflush(stdin);

    if (number == 0)
    {
        return 1;
    }
    if (number < 0)
    {
        printf("undefined\n");
        return 0;
    }

    for (i = 1; i <= number; i++)
    {

        fact = fact * i;
    }
    return fact;
}