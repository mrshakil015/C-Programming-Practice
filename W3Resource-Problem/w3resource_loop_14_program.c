/*Write a program in C to make such a pattern like a pyramid with an asterisk.

The pattern like

   *
  * *
 * * *
* * * *

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
        printf("* ");
        }
        printf("\n");
    }
    
    
   return 0;
}