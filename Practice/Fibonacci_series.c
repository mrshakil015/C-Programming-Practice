/*
Fibonacci Searies:

Enter the number of elements:9
0 1 1 2 3 5 8 13 21 
*/
#include<stdio.h>
int main()
{
    int i, num=1,sum=0,tre,feb;
    printf("Enter the terms:\n");
    scanf("%d",&tre);
    
    printf("Fibonacci searies is:\n");
    printf("%d %d ",sum,num);
    for(i=3; i<=tre; i++)
    {
        feb=sum+num;
        printf("%d ",feb);
        sum=num;
        num=feb;
     
    }
    
    return 0;
}