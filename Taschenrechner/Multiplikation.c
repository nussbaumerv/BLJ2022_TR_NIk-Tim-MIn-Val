#include <stdio.h>
#include <stdlib.h>

int Multiplikation(){
    int firstNumber;
    int secondNumber;

    printf("Type the first number: ");
    scnaf("%d", firstNumber);

    printf("Type the second number: ");
    scnaf("%d", secondNumber);

    int result = firstNumber * secondNumber;
    return result;

}
