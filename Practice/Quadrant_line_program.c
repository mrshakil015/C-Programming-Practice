#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the Quandrant point:\n");
    scanf("%d %d",&x,&y);
    
    if(x>0 && y>0)
    printf("The cordinate point (%d,%d) lines in the First Quandant",x,y);
    
    else if(x<0 && y>0)
    printf("The cordinate point (%d,%d) lines in the Second Quandant",x,y);
    
    else if(x<0 && y<0)
    printf("The cordinate point (%d,%d) lines in the Third Quandant",x,y);
    
    else if(x>0 && y<0)
    printf("The cordinate point (%d,%d) lines in the Fourth Quandant",x,y);
    
    else if(x==0 && y==0)
    printf("The cordinate point (%d,%d) lines at the Origin",x,y);
    
    return 0;
}