/*Write a C program to calculate the factorial of a given number. 
Test Data :
Input the number : 5
Expected Output :
The Factorial of 5 is: 120
*/
#include<stdio.h>
int main()
{
    int num,i,sum=1;
    
    printf("Enter an number:\n");
    scanf("%d",&num);
    
    for(i=1; i<=num; i++)
    {
        sum=sum*i;
    }
    
    printf("The Factorial of %d is = %d",num,sum);
}