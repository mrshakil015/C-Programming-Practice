#include<stdio.h>
int main()
{
    int i,n,sum=1;
    printf("Enter an number:\n");
    scanf("%d",&n);
    printf("Factorial number:\n");
    for(i=n; i>=1; i--)
    {
        sum=sum*i;
        printf("%d\n",i);
    }
    printf("Factorial of %d is= %d",n,sum);
    
}