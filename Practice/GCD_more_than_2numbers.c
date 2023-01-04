/* GCD*/
#include<stdio.h>
int main()
{
    int i,n,gcd;
    printf("Enter how many num:");
   // scanf("%d",&n);
    int arr[10];
    printf("Enter your num:\n");
    for(i=0; i<4; i++)
    {
        
        scanf("%d",&arr[i]);
        
    }
    gcd=arr[0];
    int j=1;
    while(j<4)
    {
        if(arr[j]%gcd==0)
        {
            j++;
        }
        else
        {
            gcd=arr[j]%gcd;
            i++;
        }
    }
    printf("GCD of =%d",gcd);
    return 0;
}