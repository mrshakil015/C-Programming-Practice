#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,D;
    printf("Enter four Distance:\n");
    
    scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
    
    D=pow(pow(x2-x1,2)+pow(y2-y1,2),2);
    
    printf("result= %d",D);
    return 0;
}