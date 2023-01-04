#include<stdio.h>
int main()
{
    int i,j,uppersum=0,lowersum=0,row,col;
    
     printf("Enter the row no:\n");
    scanf("%d",&row);
    
    printf("Enter tne col no:\n");
    scanf("%d",&col);
    
    int A[row][col];
    
    printf("Enter the elements of Matrix:\n");
    
    
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatrix is:\n");
    
    
    for(i=0; i<row; i++)
    {
      
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
           
        }
        printf("\n");
    }
   
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i<j)
            {
             
              uppersum=uppersum + A[i][j];
            }
            if(i>j)
            {
             
              lowersum=lowersum + A[i][j];
            }
        }
        
    }
    
    printf("\n\nSum of Upper Triangle Elements= %d\n",uppersum);
    
    printf("\n\nSum of Lower Triangle Elements= %d\n",lowersum);
    
    return 0;
    }