#include <stdio.h>
#include <stdlib.h>

int multiplikation(){
    int result = 0;
    int mulNum;
    int numbers;
    printf("How many numbers do you want to multiply?\n");
    scanf("%d", &numbers);

    while(numbers > 0){
        printf("Type a number: ");
        scanf("%d", &mulNum);
                if(result == 0){
        result = mulNum;
      
        }else  {
            result = result * mulNum;
        }
        numbers--;
    }
    
    return result;

}
