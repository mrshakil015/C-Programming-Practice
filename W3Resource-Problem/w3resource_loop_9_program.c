/*Write a program in C to display the pattern like right angle triangle using an asterisk. 

The pattern like :

*
**
***
****
*/
#include<stdio.h>
int main()
{
    int col,row,n;
    printf("Enter the number of row:\n");
    scanf("%d",&n);
    
   
    
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
        printf("*");
        }
        printf("\n");
    }
    
    
   return 0;
}