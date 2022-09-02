#include <stdio.h>

//! by Timofey Makhankov

int calculateExponents(int Number, int Exponent){
   int result = Number;
   for (Exponent > 1; Exponent--;)
   {
    result*=Number;
   }
   return result;
}