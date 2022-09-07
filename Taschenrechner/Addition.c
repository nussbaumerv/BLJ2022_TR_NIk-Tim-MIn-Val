#include <stdio.h>
#include <stdlib.h>

int addition(){
    int result = 0;
    int addNum;
    int numbers;
    printf("How many numbers do you want to add up?\n");
    scanf("%d", &numbers);

    while(numbers > 0){
        printf("Type a number: ");
        scanf("%d", &addNum);
        result = result + addNum;
        numbers--;
    }
    
    return result;

}
