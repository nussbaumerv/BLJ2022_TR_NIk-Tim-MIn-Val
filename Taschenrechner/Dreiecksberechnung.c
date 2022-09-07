#include <stdio.h>
#include <stdlib.h>


float dreiecksberechnung(){
    float firstNumber;
    float secondNumber;

    printf("Type the length of A in cm: ");
    scanf("%f", &firstNumber);

    printf("Type the length of B in cm: ");
    scanf("%f", &secondNumber);

    float result = (firstNumber * firstNumber) + (secondNumber * secondNumber);
    return result;

}


