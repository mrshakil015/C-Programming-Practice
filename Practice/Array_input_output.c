#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter array size: \n");
    scanf("%d",&n);
    int array[n];
    printf("Enter element: ");
    
    for(i=0; i<n; i++)
     {
        scanf("%d",&array[i]);
     }
    
    for(i=0; i<n; i++)
    {
    printf("z[%d]=%d\n",i,array[i]);
    
    }
}