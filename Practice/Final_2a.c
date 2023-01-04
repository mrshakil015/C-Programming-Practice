#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    printf("Enter the terms: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d ",i);
        sum=sum+i;
    }
   printf("\nSummation= %d",sum);
}