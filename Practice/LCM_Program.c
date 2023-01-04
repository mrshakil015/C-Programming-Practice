/*
LCM -Least Common Multiples

 2 |2,3
   -------
  3 |1,3
    ------
     1,1
 2*3=6
*/ 
#include <stdio.h>
int main()
 { 
    
    int num1, num2, max;
    printf("Enter two positive integers: ");
    scanf("%d%d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;  
    for(;;) 
        { 
        if(max % num1 == 0 && max % num2 == 0)
            {
             printf("LCM of %d and %d is= %d ", num1, num2, max); 
            break; 
            } max++; 
        } return 0; 
    }