#include <stdio.h>
#include <stdlib.h>

int fakultat(){
int i, fact = 1, number;  

 printf("Enter a number: "); 
 
  scanf("%d",&number);    
  
    for(i=1;i<=number;i++){    
        
      fact=fact*i;    
  }  
  return fact;
}