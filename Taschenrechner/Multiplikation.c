#include <stdio.h>
#include <stdlib.h>

int multiplikation(){
    int firstNumber;
    int secondNumber;

    printf("Type the first number: ");
    scanf("%d", &firstNumber);

    printf("Type the second number: ");
    scanf("%d", &secondNumber);

    int result = firstNumber * secondNumber;
    return result;

}
