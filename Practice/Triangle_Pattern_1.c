
#include<stdio.h>
int main()
{
    int row,col,space,n;
    printf("Enter no of rows: \n",&n);
    scanf("%d",&n);
    printf("Pattern\n");
    for(row=1; row<=n; row++)
    {
        for(space=1; space<=n-row; space++)
        {
            printf(" ");
        }
        for(col=1;col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
    return 0;
}