#include <stdio.h>
#include <stdlib.h>

int subtraktion(){
    int result = 0;
    int subNum;
    int numbers;
    printf("How many numbers do you want to subtraction?\n");
    scanf("%d", &numbers);

    while(numbers > 0){
        printf("Type a number: ");
        scanf("%d", &subNum);
        if(result == 0){
        result = subNum;
        result = result - subNum;
        }else  {
            result = result -subNum;
        }
        numbers--;
    }
    
    return result;

}