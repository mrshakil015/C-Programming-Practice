#include<stdio.h>
#include<conio.h>
int main()
{
    int row,col,n,space;
    printf("Enter on rows number\n");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=n-row;space++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
    return 0;
}