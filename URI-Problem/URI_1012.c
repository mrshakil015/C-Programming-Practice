#include<stdio.h>
int main()
{
    float A,B,C;
    scanf("%f %f %f",&A,&B,&C);
    printf("tring=%.3f\n",0.5*A*C);
    printf("radi=%f\n",3.1415*C*C);
    printf("trap=%.3f\n",((A+B)*C)*0.5);
    printf("squ=%f\n",B*B);
    printf("rec=%f\n",A*B);
}