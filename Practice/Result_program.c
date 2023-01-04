#include<stdio.h>
int main()
{
    int roll,mark,c,p,h;
    float per,total;
    char division,name[30];
    
    printf("Enter your Roll:\n");
    scanf("%d",&roll);
    printf("Enter your name:\n");
    scanf("%s",name);
    
    printf("Enter your marks:\n");
    
      scanf("%d %d %d",&c,&p,&h);
      total=c+p+h;
    
    printf("\n");
    printf("Roll no: %d\n",roll);
    printf("Your name: %s\n",name);
    printf("Total marks= %.0f\n",total);
    per=total/3;
    printf("Parcentage= %.2f\n",per);
    printf("\n");
    
    {
    if(per>=80)
    printf("First Division\n");
    else if(per>=65)
    printf("Second Division\n");
    else if(per>=45)
    printf("Third Division\n");
    else
    printf("Fail\n");
    }
    return 0;
}