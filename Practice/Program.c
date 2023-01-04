/*sample input:
5
sample output:
-1 2 -3 4 -5
*/
#include<stdio.h>

int main()
{
    int nu,x,i,j=-1;
   
    printf("Enter the number of terms:\n");
    scanf("%d",&nu);
    printf("The series is:\n");
    for(i=1; i<=nu; i=i+1)
    {
        x=i*(+j);
        printf("%d ",x);
        j=j*(-1);
       
    }
    return 0;
}
