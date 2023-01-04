#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter an Array size:\n");
    scanf("%d",&n);
    int num[n];
    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\n");
    printf("Array index & elements list:\n\n");
    for(i=0; i<n; i++)
    {
        printf("array[%d]= %d\n",i,num[i]);
    }
    printf("\n");
    int min=num[0];
    for(i=1; i<n; i++)
    {
        if(min>num[i])
        min=num[i];
    }
    printf("Minimun Number is= %d\n",min);
    return 0;
}