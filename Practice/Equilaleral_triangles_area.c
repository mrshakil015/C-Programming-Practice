#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x,area;
    printf("Enter three sides input in degree:\n");
    scanf("%d %d %d",&a,&b,&c);
    if((a==b)&&(b==c)&&(c==a)&&(a+b+c==180))
    {
        printf("Enter one input for the equilateral Triangle area:\n");
        scanf("%f",&x);
        area=0.433*pow(x,2);
        printf("\nArea of Equilateral triangle is = %.3f\n",area);
    }
    else
    printf("Error!! It is not Equilateral Triangle sides.\n");
    return 0;
}