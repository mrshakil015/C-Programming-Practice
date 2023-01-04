/*
searies=1/1+1/2+1/3+1/4+...+n
*/
#include <stdio.h> 

double sum(double n); 
int main() 
    { 
    double n; 
    double total; 
    printf("Enter a positive integer greater than 0: "); 
    scanf("%lf", &n); 
    total = sum(n); 
    printf("Sum: %.3lf", total); 
    return 0; 
    } 
double sum(double n) 
    { 
    if (n == 1) 
    return 1; 
    else 
    return ((1/n) + sum(n - 1)); 
    }