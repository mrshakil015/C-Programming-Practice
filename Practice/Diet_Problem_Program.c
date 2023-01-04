#include<stdio.h>
#include<conio.h>
int main()
{
    int b,l,d;
    printf("Enter breakfast time:\n ");
    scanf("%d", &b);
    printf("Enter lunch time:\n ");
    scanf("%d", &l);
    printf("Enter dinner time:\n ");
    scanf("%d", &d);
        if(b==7 && l==1 && d==8 || b==8 && l==2 && d==9)
        printf("\nRight diet");
        else
        printf("\nWrong diet");
    
    getch();
    return 0;
}