#include <stdio.h>

int wurzeln(int num){
    short calculating = 1;
    short is_running = 1;
    while (is_running){
        
    int input = 0;
    printf("Give a Digit:");
    scanf("%d", &input);
            
    if(input < 1){
        
        printf("Please try again!\n");
                
    }else {
        while(calculating){
            int i = input;
            int compare = i / i;
            
            if(){
                
                return i;
                calculating = 0;
            } else if (compare > input){
                printf("Couldn't get the square root of %d", input);
                calculating = 0;
            }
        }
    }is_running = 0;
    }
}