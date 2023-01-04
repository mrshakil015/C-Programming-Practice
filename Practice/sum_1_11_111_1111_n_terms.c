#include <stdio.h>
int main() 
 { 
    int n,i; 
    long sum=0;
    long int t=1;
    printf("Input the number of terms : "); scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
        printf("%d ",t); 
        if (i<n)
      {
            printf("+ "); 
      }
        sum=sum+t;
        t=(t*10)+1;
      }
    printf("\nThe Sum is : %d\n",sum);
    
    return 0;
    }