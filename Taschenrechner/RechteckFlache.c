#include <stdio.h>
#include <stdlib.h>

float RechteckFlache(){
    float firstNumber;
    float secondNumber;

    printf("Type the length of the first side in cm: ");
    scanf("%f", &firstNumber);

    printf("Type the length of second side in cm: ");
    scanf("%f", &secondNumber);

    float result = (firstNumber * firstNumber);
    return result;
}