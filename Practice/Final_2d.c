#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0,j;
    printf("Enter the terms: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        j=pow(i,2);
        printf("%d ",j);
        sum=sum+j;
    }
   printf("\nSummation= %d",sum);
}