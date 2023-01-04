#include<stdio.h>
int main()
{
    int i,size,midd;
    
    printf("Enter array size:\n");
    scanf("%d",&size);
    
    int array[size];
    
    printf("Enter the elements:\n");
    
    for(i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\n");
    
    midd=size/2;
    printf("Middle Number=%d\nMiddle Number Index[%d]\n",array[midd],midd);
    
    return 0;
}