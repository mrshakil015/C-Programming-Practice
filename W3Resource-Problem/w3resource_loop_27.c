/*
Write a c program to check whether a given number is a perfect number or not. 
Test Data :
Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,sum=0;
    scanf("%d",&num);
    printf("The number of %d divider is:\n\n",num);
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
        sum=(sum+i);
        
        printf("%d ",i);
        }
    }
    sum=sum-num;
    printf("\n\nSum of the Diverter is = %d\n",sum);
    
    if(sum==num)
    {
        printf("So, number of %d is perfect.\n",num);
    }
    else
    printf("So, number of %d is not perfect.\n",num);
    return 0;
}