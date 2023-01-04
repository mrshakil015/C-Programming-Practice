#include <stdio.h> 
long int fact( int n ) 

    { 
   
    
    if ( n <= 1 ) 
    return 1; 
    else 
    
    return ( n * fact (n-1) ); 
    } 
   
    int main () 
    { 
    int i,trem; 
    printf("How many numbers do you factorila:\n");
    scanf("%d",&trem);
    printf("\nFactorial is:\n");
    for ( i = 1; i <=trem; i++ ) 
    printf("%d! = %d\n",i, fact(i) ); 
    return 0; 
    }