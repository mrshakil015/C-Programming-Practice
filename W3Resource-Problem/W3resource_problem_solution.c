/*Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......].
Test Data :
Input the value of x :2
Input number of terms : 5
Expected Output :
The values of the series:
2
-8
32
-128
512
The sum = 410*/

#include<stdio.h>
#include<math.h>
int main()
{
    int nu,x,sum=0,i,j=+1,k;
    printf("Enter Number:\n");
    scanf("%d",&x);
    k=x;
    printf("Enter the number of terms:\n");
    scanf("%d",&nu);
    printf("The values of series:\n");
    for(i=1; i<=nu*2; i=i+2)
    {
        
        x=pow(x,i)*j;
        sum=sum+x;
       
        printf("%d \n",x);
        j=j*(-1);
        x=k;
        
        
    }
    
    printf("\nSummation of the Series= %d",sum);
    
    return 0;
}