#include <stdio.h>
int main()
{ 
    int a, b, c, num;
    printf("Enter a number : "); 
    scanf("%d",&num); 
    a = num;
    b = 0;
    while(num > 0) 
        { 
        c = num % 10; 
        b = (b * 10) + c; 
        num = num / 10;
        } 
    if(a == b)
    printf("\n%d is a Palindrome number", a);
    else
     printf("\n%d is not a Palindrome number", a);
     return 0; 
 }