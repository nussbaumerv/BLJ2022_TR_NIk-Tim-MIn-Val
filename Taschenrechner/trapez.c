#include <stdio.h>
#include <stdlib.h>

float trapez(){
    float a;
    float b;
    float height;
    int c;
        FILE *file;
        file = fopen("Trapeze.txt", "r");
        if (file)
        {
            while ((c = getc(file)) != EOF)
                putchar(c);
            fclose(file);
        }

    printf("\nType the length of a in cm: ");
    scanf("%f", &a);

    printf("Type the length of b in cm: ");
    scanf("%f", &b);
    
    printf("Type the height in cm: ");
    scanf("%f", &height);

    float result = (a + b) * height / 2;
    return result;
}