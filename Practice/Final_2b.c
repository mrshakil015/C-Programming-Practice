#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the terms: ");
    scanf("%d",&n);
    for(i=2; i<=n*2; i=i+2)
    {
        printf("%d ",i);
        sum=sum+i;
    }
   printf("\nSummation= %d",sum);
}