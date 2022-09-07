#include <stdio.h>
#include <stdlib.h>

float KreisFlache(){
    float pi = 3.14159;
    float radNum;
    int isRunning = 1;
     int c;
        FILE *file;
        file = fopen("Circle.txt", "r");
        if (file)
        {
            while ((c = getc(file)) != EOF)
                putchar(c);
         
    
    printf("\nRadius: ");
    scanf("%f", &radNum);
    float result = pi *(radNum * radNum);
    return result;
}
}