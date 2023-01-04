/*
A program that reads a character from keyboard and then prints it in reverse case. That is if the input is upper case, the output will be lower case and vice versa

input:
A
output:
a
*/

#include <stdio.h>
#include<ctype.h>

int main()
{
    char alphabet;
    printf("Enter an alphabet:");
    putchar('\n');
    alphabet=getchar();
    printf("Reverse:\n");
    
    if(islower(alphabet))
    putchar(toupper(alphabet));
    else
    putchar(tolower(alphabet));
}
