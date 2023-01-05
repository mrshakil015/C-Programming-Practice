
#include<stdio.h>
int main()
{
    double i,b=1,a,S=0;
    for(i=1; i<=39; i+=2)
    {
        a=i/b;
        S+=a;
        b=b*2;
        
    }
    printf("%.2lf\n",S);
    return 0;
}
