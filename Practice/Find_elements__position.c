#include<stdio.h>
int main()
{

    int n,i,search,ok=0;

    printf("Enter Size of array : ");
    scanf("%d",&n);

    int array[n];

    printf("Enter Element of array : \n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Type to Search: ");
    scanf("%d",&search);

    for(i=0; i<n; i++)
    {
        if(search==array[i])
        {
            ok=1;
            printf("\n%d is found position %d\n",search,i);
        }
    }

    if(ok!=1)
    {
        printf("\n%d is not found\n",search);
    }
    return 0;
}