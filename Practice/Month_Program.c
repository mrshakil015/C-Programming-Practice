#include<stdio.h>
#include<conio.h>
int main()
{
    int m,y;
    printf("Enter year: ");
    scanf("%d",&y);
    printf("Enter month: ");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
        case 3:
        case 5:
        case 8:
        case 10:
        case 12:
        printf("31 days");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("30 days");
        break;
        case 2:
        {
            if(y%4==0 && y%100!=0 || y%400==0)
            printf("29 days");
            else
            printf("28 days");
        }
        getch();
        return 0;
        
    }
}