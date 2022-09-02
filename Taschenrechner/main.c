#include <stdio.h>
#include <stdlib.h>
#include "Addition.h"
#include "Division.h"
#include "Exponenten.h"
#include "Subtraktion.h"
#include "Fakultat.h"
#include "Wurzeln.h"
#include "Multiplikation.h"

int main(int argc, char **argv)
{
    char chooseFunction[10];
    printf("Welcome to our calculator");
    scanf("%c", chooseFunction);

    if (chooseFunction == "a" || chooseFunction == "A")
    {
        addition();
        printf("%d", addition());
    }
    else if (chooseFunction == "s" || chooseFunction == "S")
    {
        subtraktion();
    }
    else if (chooseFunction == "m" || chooseFunction == "M")
    {
       multiplikation();
    }
    else if (chooseFunction == "d" || chooseFunction == "D")
    {
       division();
    }
    else if (chooseFunction == "f" || chooseFunction == "F")
    {
       fakultat();
    }
    else if (chooseFunction == "w" || chooseFunction == "W")
    {
       wurzeln();
    }
    else if (chooseFunction == "e" || chooseFunction == "E")
    {
       exponenten();
    }

    return (EXIT_SUCCESS);
}
