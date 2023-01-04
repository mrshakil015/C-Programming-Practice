/*
Recursion : print first 30 natural numbers : ------------------------------------------------- The natural numbers are : 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 
*/
#include<stdio.h>
int  numPrint(int);
int main()
{
    int n = 1;
    
    printf("\n\n Recursion : print first 30 natural numbers :\n");
      printf("-------------------------------------------------\n"); 
	   printf(" The natural numbers are :\n");
    numPrint(n);
    printf("\n\n");
    return 0;
}
int numPrint(int n)

{
    
    if(n<=30)
    {
         printf("%d ",n);
         numPrint(n+1);
    }
}
