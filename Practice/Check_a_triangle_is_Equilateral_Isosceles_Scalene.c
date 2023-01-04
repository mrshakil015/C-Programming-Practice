#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three input of triangle:\n");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a+b+c==180)
    {
        if(a==b && b==c && c==a)
        printf("Equilateral Triangle\n");
        
        else if(a==b || b==c || c==a)
        printf("Isosceles Triangle\n");
        
        else
        printf("Scalene Triangle\n");
    }
    
    else if(a+b+c<180)
    printf("Error!! Your input lower than 180\n");
    
    else
    printf("Error!! Your input greater than 180\n");
    
    return 0;
}