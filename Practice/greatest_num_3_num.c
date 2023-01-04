#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("%d is gratest among three\n",a);
        else
        printf("%d is gratest among three\n",c);
        
    }
    else
    {
       if(b>c) 
        printf("%d is gratest among three\n",b);
        else
        printf("%d is gratest among three\n",c);
    }
    return 0;
}