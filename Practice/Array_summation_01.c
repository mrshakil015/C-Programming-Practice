#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Array size: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("array[%d]=%d\n",i,array[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        sum=sum+array[i];
    }
    
    printf("Summation= %d",sum);
    return 0;
}