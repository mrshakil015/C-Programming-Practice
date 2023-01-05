#include<stdio.h>
int main()
{
    long long int num,i;
    scanf("%lld",&num);
    for(i=1; i<=10000; i++)
    {
        if(i%num == 2)
        {
            printf("%lld\n",i);
            
        }
    }
    return 0;
}
