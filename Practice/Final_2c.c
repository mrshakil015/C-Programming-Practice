#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the terms: ");
    scanf("%d",&n);
    for(i=1; i<=n; i=i+1)
    {
        printf("%d ",i*2);
        sum=sum+i*2;
        
    }
   printf("\nSummation= %d",sum);
}