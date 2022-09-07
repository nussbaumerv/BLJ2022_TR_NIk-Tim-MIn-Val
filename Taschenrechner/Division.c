#include <stdio.h>
#include <stdlib.h>

float division(){
    float result = 0;
    float divNum = 0;
    float numbers;
    float num = 1;
    printf("How many numbers do you want to divide?\n");
    scanf("%f", &numbers);
    
    while(numbers > 0){
        printf("Type a number: ");
        scanf("%f", &divNum);
        if (num == 1){
        num =  divNum / num;
        }else{
            num = num / divNum;
        }
        numbers--;
    }
    result = num;
    return result;

}