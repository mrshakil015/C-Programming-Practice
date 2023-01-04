/*10.Write a program in C to display the pattern like right angle triangle with a number. 

The pattern like :

1
12
123
1234 */
#include<stdio.h>

int main()
{
    int row,col,n;
    
    printf("Enter row no: \n");
    scanf("%d",&n);
    
    
    for(row=1; row<=n; row++)
    {
        
      for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
            
            
    }
    
   return 0;
}