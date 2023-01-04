#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter Row number: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",col+63);
        }
        printf("\n");
    }
    return 0;
}