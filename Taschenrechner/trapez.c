#include <stdio.h>
#include <stdlib.h>

float trapez(){
    float a;
    float b;
    float height;

    printf("Type the length of a in cm: ");
    scanf("%f", &a);

    printf("Type the length of b in cm: ");
    scanf("%f", &b);
    
    printf("Type the height in cm: ");
    scanf("%f", &height);

    float result = (a + b) * height / 2;
    return result;
}