#include<stdio.h>
int main()
{
    int i,sum,n;
    printf("Enter n value: ");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("Summation = %d",sum);
    return 0;
}