#include<stdio.h>
int main()
{
    int i,j,row,col;
    printf("Enter the row no:\n");
    scanf("%d",&row);
    printf("Enter tne col no:\n");
    scanf("%d",&col);
    int array[row][col];
    printf("Enter the elements:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }
    printf("Output elements is:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            
           printf("Array index[%d][%d]= %d\n",i,j,array[i][j]);
        }
        printf("\n");
    }
    return 0;
}