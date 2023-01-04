#include<stdio.h>
int main()
{
    char string_ch;
    printf("Enter a Character:\n");
    scanf("%c",&string_ch);
    
    if((string_ch>='A' && string_ch<='Z') || (string_ch>='a' && string_ch<='z'))
    printf("This is a Alphabate.\n");
    
    else if(string_ch>='0' && string_ch<='9')
    printf("This is a digit.\n");
    
    else
    printf("This is a Special symbol.\n");
    
    return 0;
}