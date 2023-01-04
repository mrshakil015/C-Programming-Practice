/*Write a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row. 

   1
  2 2 
 3 3 3 
4 4 4 4
*/
#include<stdio.h>
int main()
{
    int col,row,n,space;
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
        printf("%d ",row);
        }
        printf("\n");
    }
    
    
   return 0;
}