#include <stdio.h>
#include <stdlib.h>


float dreiecksberechnung(){
    float firstNumber;
    float secondNumber;

    printf("Type the height of the triangle in cm: ");
    scanf("%f", &firstNumber);

    printf("Type the length of the base side in cm: ");
    scanf("%f", &secondNumber);

    float result = (firstNumber * firstNumber)/2;
    return result;

}


