#include<stdio.h>
int main()
{
    int num,ele,i,sum=0,j,test;
    
    printf("Enter no of Test: \n");
    scanf("%d",&test);
   
   
    for(j=1; j<=test; j++)
    {
        printf("Enter an element: \n");
        scanf("%d",&num);
        printf("Test case %d:\n",j); 
        
        for(i=1; i<=num; i++)
    {
        scanf("%d",&ele);
        sum=sum+ele;
         
    }
    
        printf("summation=%d\n",sum);   
        sum=0;
        /*jjk*/
    }
    return 0;
}