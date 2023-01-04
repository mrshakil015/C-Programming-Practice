#include<stdio.h>
int main()
{
    int i,sum,n;
    printf("Number of N: ");
    scanf("%d",&n);
    sum=0;
    for(i=0; i<n; i++)
    {
        sum=sum+i;
        
    }
    printf("Summation = %d",sum);
    return 0;
}