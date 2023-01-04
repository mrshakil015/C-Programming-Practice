/*
Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. 
Test Data :
Input the number or terms :5
Expected Output :
9 99 999 9999 99999
The sum of the saries = 111105
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int i,k=9,sum=0,trem,re=9;
    
    printf("Enter the number of trems:\n");
    scanf("%d",&trem);
    
    printf("The series is:\n");
    for(i=1; i<=trem; i=i+1)
    {
       /* if(i==0)
        
        k=0;
        else
        k=9;
        */
        sum=sum+re;
       
        printf("%d ",re);
        re=pow(10,i)*k+re;
        
    }
    
    printf("\n\nSum of the Series is= %d\n",sum);
    
    return 0;
}