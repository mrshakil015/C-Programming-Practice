#include<stdio.h>
int main()
{
    int i,j,sum=0,row,col;
    
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
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
           
        }
        printf("\n");
    }
    printf("\nDiagonal Elements: ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i==j)
            {
                
                printf("%d ",A[i][j]);
                sum=sum + A[i][j];
            }
        }
        
    }
    printf("\n\nSum of Diagonal Elements= %d\n",sum);
    return 0;
    }