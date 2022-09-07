#include <stdio.h>
#include <stdlib.h>

int multiplikation(){
    float firstNumber;
    float secondNumber;

    printf("Type the first number: ");
    scanf("%f", &firstNumber);

    printf("Type the second number: ");
    scanf("%f", &secondNumber);

    float result = firstNumber * secondNumber;
    return result;

}
