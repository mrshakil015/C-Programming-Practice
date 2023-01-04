#include<stdio.h>
int main()
{
    int i,num,size;
    
    printf("Enter array size:\n");
    scanf("%d",&size);
    int array[size];
    
    printf("Enter the elements:\n");
    
    for(i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the index number: \n");
    scanf("%d",&num);
    
    printf("Number of Array Index [%d]= %d\n",num,array[num]);
    
    return 0;
}