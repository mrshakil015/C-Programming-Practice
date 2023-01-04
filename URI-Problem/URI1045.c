#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if((a*a)>=(b*b)+(c*c))
    printf("NAO FORMA TRIANGULO\n");
    if((a*a)==(b*b)+(c*c))
    printf("TRIANGULO RETANGULO\n");
    if((a*a)>(b*b)+(c*c));
    printf("TRIANGULO OBTUSANGULO\n");
    if((a*a)<(b*b)+(c*c))
    printf("TRIANGULO ACUTANGULO\n"); 
    if(a=b=c)
    printf("TRIANGULO EQUILATER\n");
    if(a==b || a==c || b==c)
    printf("TRIANGULO ISOSCELES\n");
    return 0;
}