/*1+ 1/2+ 1/3+1/4+....1/n */
#include<stdio.h>
int main()
{
    int i,trems;
    float re,num,sum=0;
    
    printf("Ener the num:\n");
    scanf("%f",&num);
    
    printf("Enter terms:\n");
    scanf("%d",&trems);
    
    for(i=1; i<=trems; i++)
    {
        re=num/i;
        sum=sum+re;
    }
    
    printf("\nSummation= %.2f",sum);
    return 0;
}