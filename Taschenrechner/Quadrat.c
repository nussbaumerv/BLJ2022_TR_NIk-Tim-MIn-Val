#include <stdio.h>
#include <stdlib.h>

float Quadrat(){
    int c;
        FILE *file;
        file = fopen("Square.txt", "r");
        if (file)
        {
            while ((c = getc(file)) != EOF)
                putchar(c);
            fclose(file);
        }
    float a;
    printf("\nSide a: ");
    scanf("%f", &a);
    float result = a * a;
    return result;
}