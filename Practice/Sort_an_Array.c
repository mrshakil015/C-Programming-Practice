#include<stdio.h>
int main()
{
    int temp,swap,i,n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int list[n];
    printf("Enter numbers that you want to sort: \n");
    for(i=0; i<n; i++)
    {
    scanf("%d",&list[i]);
    }
    while(1)
   {
        swap=0;
        for(i=0; i<n-1; i++)
        {
            if(list[i]>list[i+1])
            {
                temp=list[i];
                list[i]=list[i+1];
                list[i+1]=temp;
                swap=1;
            }
        }
        if(swap==0)
        break;
    }
    printf("Sorted list:\n");
    for(i=0; i<n; i++)
    {
    printf("%d\n",list[i]);
    }
    return 0;
}