/*Write a program in C to display the n terms of odd natural number and their sum .


Input number of terms :
 10
Expected Output :
The odd numbers are :
1 3 5 7 9 11 13 15 17 19

The Sum of odd Natural Number upto 10 terms : 100*/

#include<stdio.h>
int main()
{
    int i,trem,sum=0;
    printf("Enter the number of trems:\n");
    scanf("%d",&trem);
   
    for(i=1; i<=trem*2; i=i+2)
    {
        printf("%d ",i);
        sum=sum+i;
    }
    printf("\nsum= %d",sum);
    
   return 0;
}