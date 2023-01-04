#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an Alphabat: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("\n%c Alphabat is Capital Letter\n",ch);
    else if(ch>='a' && ch<='z')
    printf("\n%c Alphabat is Small letter\n",ch);
    else
    printf("\nNot alphabat\n");
    return 0;
}