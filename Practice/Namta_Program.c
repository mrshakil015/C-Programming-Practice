#include<stdio.h>
int main()
{
    int num,multi,i;
    char r;
    start:
    printf("Enter an number: ");
    scanf("%d",&num);
    for(i=1; i<=10; i++)
    {
        multi=num*i;
        printf("%dx%d =%d\n",num,i,multi);
    }
    printf("\n Do you want to repeat(y/n)? ");
    scanf("%c",&r);
    scanf("%c",&r);
    if((r=='Y')||(r=='y'))
    goto start;
    return 0;
}