/*When the sum of the cube of the individual digits of a number is equal to that number, the number is called Armstrong number. For example 153. Sum of its divisor is 13 + 53;+ 33; = 1+125+27 = 153*/
#include <stdio.h>
int main()
{
    int num,r,sum=0,temp;
    printf("Input a number: "); scanf("%d",&num);
    for(temp=num;num!=0;num=num/10)
      {
        r=num % 10;
        sum=sum+(r*r*r);
      }
    if(sum==temp)
    printf("%d is an Armstrong number.\n",temp);
    else
    printf("%d is not an Armstrong number.\n",temp);
    
    return 0;
    } 
