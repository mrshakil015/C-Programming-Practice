/*Write a program in C to make such a pattern like a pyramid with numbers increased by 1.

The pattren like:

   1
  2 3 
 4 5 6
7 8 9 10 

*/
#include<stdio.h>
int main()
{
    int col,row,n,space,k=1;
    printf("Enter the number of row:\n");
    scanf("%d",&n);
    
   
    
    for(row=1; row<=n; row++)
    {
        for(space=1; space<=n-row; space++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
        printf("%d ",k++);
        }
        printf("\n");
    }
    
    
   return 0;
}