/*
Enter a positive integer: 756 
The sum of the digit is : 18
*/
#include <stdio.h> 
int main() 
    { 
    int num, r, sum = 0; 
    printf("Enter a positive integer: "); 
    scanf("%d",&num); 
    while(num != 0) 
        { 
        r = num % 10; 
        sum = sum + r; 
        num = num / 10;
        } 
    printf("\nThe sum of the digit is : %d ", sum); 
    return 0; 
    }