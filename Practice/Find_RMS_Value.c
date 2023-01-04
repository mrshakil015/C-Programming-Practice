
#include<stdio.h>
#include<math.h>


int main()
{
    int i,n;
    float sum=0,rms;
    printf("Enter array size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0; i<n; i++)
    {
        
        sum = sum + arr[i] * arr[i];
    }
    rms=sqrt(sum/n);
    
    printf("\n\nRMS Value=%f",rms);
    return 0;
    
}