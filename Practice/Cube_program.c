#include<stdio.h>
int main()
{
    int i,trem;
    printf("Enter the number of trems:\n");
    scanf("%d",&trem);
   
    for(i=1; i<=trem; i++)
    {
        printf("Number: %d and cube of %d is: %d\n", i,i,(i*i*i));
    }
   return 0;
}