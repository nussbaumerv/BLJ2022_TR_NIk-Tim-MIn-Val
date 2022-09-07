#include <stdio.h>
#include <stdlib.h>

float division(){
   float result = 0;
    float divNum = 0;
    float numbers;
    float num = 0;
    printf("How many numbers do you want to divide?\n");
    scanf("%f", &numbers);
    
    while(numbers > 0){
        num = divNum;
        printf("Type a number: ");
        scanf("%f", &divNum);
        num =  num / divNum;
        numbers--;
    }
    result = num;
    return result;

}

