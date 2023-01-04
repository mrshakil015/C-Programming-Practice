#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("The addition result=%d",a+b+c);
    printf("\nThe Multiplication result=%d",a*b*c);
    getch();
    return 0;
}