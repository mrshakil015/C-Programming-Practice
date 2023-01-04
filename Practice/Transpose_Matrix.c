#include<stdio.h>
int main()
{
    int i,j,row,col;
    
     printf("Enter the row no:\n");
    scanf("%d",&row);
    printf("Enter tne col no:\n");
    scanf("%d",&col);
    
    int A[row][col],B[row][col];
    
    
    printf("Enter the elements of A Matrix:\n");
    
    
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    
    
    printf("\nA Matrix is:\n");
   // printf("\nA= ");
    
    
    for(i=0; i<row; i++)
    {
        printf("\t");
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
          
           B[i][j]=A[j][i];
        }
        
    }
    
    printf("\nThe transpose of A Matrix is:\n");
    
  //  printf("\nB=");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
          
           printf("%d ",B[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}