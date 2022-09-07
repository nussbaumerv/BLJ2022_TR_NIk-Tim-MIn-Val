#include <stdio.h>
#include <stdlib.h>

float KreisFlache(){
    float pi = 3.14159;
    float radNum;
    
    printf("Radius: ");
    scanf("%f", &radNum);
    float result = pi *(radNum * radNum);
    return result;
}