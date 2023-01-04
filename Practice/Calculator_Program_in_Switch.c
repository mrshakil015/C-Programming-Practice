#include<stdio.h>
#include<conio.h>

int main()
{
    int n,num1,num2,result;
    char r;
    top:
    printf("\nchoose one option\n");
    printf("press-1: for Addition.\n");
    printf("press-2: for Subtraction.\n");
    printf("press-3: for Division.\n");
    printf("press-4: for Multiplication.\n");
    scanf("%d",&n);
    {
    
    if(n==1)
    printf("You choosed Addition option.\n");
     if(n==2)
    printf("You choosed Subtraction option.\n");
    if(n==3)
    printf("You choosed Division option.\n");
      if(n==4)
    printf("You choosed Multiplication option.\n");
    }
    if(n>4)
    {
       
    printf("\nYou Enter wrong option.\n");
        
    goto last;
    }
    
    
    printf("Enter two integer number: ");
    scanf("%d %d",&num1,&num2);
    
    switch(n)
    {
        case 1:result=num1+num2;
        printf("\nResult=%d",result);
        break;
        case 2: result=num1-num2;
        printf("\nResult=%d",result);
        break;
        case 3: result=num1/num2;
        printf("\nResult=%d",result);
        break;
        case 4: result=num1*num2;
        printf("\nResult=%d",result);
        break;
        
    }
    printf("\nDo you want to repeat?(y/n):");
    scanf("%c",&r);
    scanf("%c",&r);
    if(r=='Y' || r=='y')
    goto top;
    last:
    getch();
    return 0;
}