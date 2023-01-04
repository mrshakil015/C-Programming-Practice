/* LCM*/
#include<stdio.h>
int main()
{
    int i,n,gcd,lcm=1,k;
    printf("Enter how many num:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter your num:\n");
    for(i=0; i<n; i++)
    {
        
        scanf("%d",&arr[i]);
      
    }
    gcd=arr[0];
    int j=1;
    while(j<n)
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
    for(k=0; k<n; k++)
    {
        lcm=lcm*arr[k];
    }
    printf("LCM = %d\n",lcm/gcd);
    
    
    return 0;
}