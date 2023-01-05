#include<stdio.h>
int main()
{
    int x,y,a,sum=0,i;
    while(1)
    {
        
        scanf("%d",&x);
        sum=0;
        if(x==0)
        {
            break;
        }
        else if(x%2==0)
        {
            for(i=x; i<=x+8; i+=2)
            {
                sum+=i;
            }
        }
        else
        {
            for(i=x+1; i<=x+9; i+=2)
            {
                sum+=i;
            }
        }
        printf("%d\n",sum);
       
    }
     return 0;
}
