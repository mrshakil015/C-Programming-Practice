#include<stdio.h>
int main()
{
    int pc1,pc2,u1,u2;
    float pp1,pp2;
    scanf("%d %d %f",&pc1,&u1,&pp1);
    scanf("%d %d %f",&pc2,&u2,&pp2);
    printf("VALOR A PAGAR: R$ %.2f",(u1*pp1)+(u2*pp2));
    return 0;
}