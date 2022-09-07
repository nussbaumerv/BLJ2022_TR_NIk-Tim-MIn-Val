#include <stdio.h>



int exponenten(){
    int Number;
    int Exponent;
    printf("Number: ");
    scanf("%d", &Number);
    printf("Exponent: ");
    scanf("%d", &Exponent);
   int result = Number;
   for (Exponent > 1; Exponent--;)
   {
    result*=Number;
   }
   return result;
}