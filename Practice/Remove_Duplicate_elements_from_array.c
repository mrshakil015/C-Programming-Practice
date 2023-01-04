/*
Enter array size : 6
1 1 2 3 4 5 
1 2 3 4 5
*/
#include <stdio.h> 
int main() 
    { 
    int i, j, k, flag = 0, a[10], n; 
    printf("Enter array size: "); 
    scanf("%d",&n); 
    for(i = 0;i < n;i++) 
    scanf("%d ",&a[i]); 
    printf("\n"); 
    for(i = 0;i < n;i++) 
      { 
        for(j = i-1;j >= 0;j--) 
            { 
            if(a[i] == a[j]) 
                { 
                flag = 1; 
                } 
            } 
        if(flag == 0)
         { 
            printf("%d\t",a[i]); 
          } 
        flag = 0; 
      } 
    return 0; 
    }