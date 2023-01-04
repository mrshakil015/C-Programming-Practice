#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,n,sum=0,j;
    printf("Enter the terms: ");
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
         j=i*3;
        printf("%lld ",j);
       
        sum=sum+i;
        i=j;
    }
   printf("\nSummation= %lld",sum);
}