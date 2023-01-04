#include<stdio.h>
int main()
{
    double a,b;
    char nam[100];
    scanf("%s %lf %lf",&nam,&a,&b);
    
    printf("TOTAL = R$ %.2lf",a+(b*0.15));
    printf("\n");
    
  return 0;
}