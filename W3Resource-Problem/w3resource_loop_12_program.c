/*Write a program in C to make such a pattern like right angle triangle with number increased by 1. 

The pattern like :

1
2 3
4 5 6
7 8 9 10
*/
#include<stdio.h>
int main()
{
    int col,row,n,k=1;
    printf("Enter the number of row:\n");
    scanf("%d",&n);
    
   
    
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
        printf("%d ",k++);
        }
        printf("\n");
    }
    
    
   return 0;
}