/*
Enter a limit : 5 
Enter Numbers to sort : 27 24 29 22 26 ----Ascending Order---- 22 24 26 27 29
*/
#include <stdio.h> 
int main() 
    { 
    int i, j, n, a[30], temp = 0; 
    printf("\nEnter a limit : ");
    scanf("%d", &n); 
    printf("\nEnter %d Numbers to sort :\n",n); 
    for(i = 0;i < n;i++) 
    scanf("%d", &a[i]); 
    for(i = 0;i < n-1;i++) 
        { 
        for(j = i;j < n;j++) 
            { 
            if(a[i] > a[j]) 
                { 
                temp = a[i]; 
                a[i] = a[j]; 
                a[j] = temp; 
                } 
            } 
        } 
    printf("\n----Ascending Order----"); 
    for(i = 0;i < n;i++)
    printf("%d ", a[i]); 
    return 0; 
    }