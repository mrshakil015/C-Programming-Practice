#include<stdio.h>
int main()
{
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);
    if(number>=33)
    printf("\n You pass in the examination");
    else
    printf("\You fail in the Examination.");
    return 0;
}