#include<stdio.h>
int main()
{
    int row,n,col,sum;
    printf("Enter tne no of row: \n");
    scanf("%d",&n);
    printf("PATTERN\n\n");
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