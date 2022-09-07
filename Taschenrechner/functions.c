#include <stdio.h>
#include <stdlib.h>

int addition(){
    int result = 0;
    int addNum;
    int numbers;
    printf("How many numbers do you want to add up?\n");
    scanf("%d", &numbers);

    while(numbers > 0){
        printf("Type a number: ");
        scanf("%d", &addNum);
        result = result + addNum;
        numbers--;
    }
    
    return result;

}

int subtraktion(){
    int result = 0;
    int subNum;
    int numbers;
    printf("How many numbers do you want to subtraction?\n");
    scanf("%d", &numbers);

    while(numbers > 0){
        printf("Type a number: ");
        scanf("%d", &subNum);
        if(result == 0){
        result = subNum;
      
        }else  {
            result = result -subNum;
        }
        numbers--;
    }
    
    return result;

}

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

float division(){
    float result = 0;
    float divNum = 0;
    float numbers;
    float num = 1;
    printf("How many numbers do you want to divide?\n");
    scanf("%f", &numbers);
    
    while(numbers > 0){
        printf("Type a number: ");
        scanf("%f", &divNum);
        if (num == 1){
        num =  divNum / num;
        }else{
            num = num / divNum;
        }
        numbers--;
    }
    result = num;
    return result;

}

int exponenten(){
    int Number;
    int Exponent;
    printf("Number: ");
    scanf("%d", &Number);
    printf("Exponent: ");
    scanf("%d", &Exponent);
   int result = Number;
   for (Exponent > 1; --Exponent;)
   {
    result*=Number;
   }
   return result;
}

int wurzeln(int num){
    short calculating = 1;
    short is_running = 1;
    int i = 1;
    while (is_running){
        
    int input = 0;
    printf("Give a Digit:");
    scanf("%d", &input);
            
    if(input < 1){
        
        printf("Please try again!\n");
                
    }else {
        while(calculating){
            int compare = i * i;
            if(compare == input){
                return i;
                calculating = 0;
            } else if (compare > input){
                printf("Couldn't get the square root of %d", input);
                calculating = 0;
            }
            ++i;
        }
    }is_running = 0;
    }
}

int fakultat(){
int i, fact = 1, number;  

 printf("Enter a number: "); 
 
  scanf("%d",&number);    
  
    for(i=1;i<=number;i++){    
        
      fact=fact*i;    
  }  
  return fact;
}

int dreiecksberechnung(){
    int firstNumber;
    int secondNumber;

    printf("Type the length of A in cm: ");
    scanf("%d", &firstNumber);

    printf("Type the length of B in cm: ");
    scanf("%d", &secondNumber);

    int result = (firstNumber * firstNumber) + (secondNumber * secondNumber);
    return result;

}