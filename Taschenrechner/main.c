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
        Addition();
        printf("%d", Addition());
    }
    else if (chooseFunction == "s" || chooseFunction == "S")
    {
        Subtraktion();
    }
    else if (chooseFunction == "m" || chooseFunction == "M")
    {
       Multiplikation();
    }
    else if (chooseFunction == "d" || chooseFunction == "D")
    {
       Division();
    }
    else if (chooseFunction == "f" || chooseFunction == "F")
    {
       Fakultat();
    }
    else if (chooseFunction == "w" || chooseFunction == "W")
    {
       Wurzel();
    }
    else if (chooseFunction == "e" || chooseFunction == "E")
    {
       Exponenten();
    }

    return (EXIT_SUCCESS);
}
