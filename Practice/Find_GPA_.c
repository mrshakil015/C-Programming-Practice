#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your marks: ");
    scanf("%d",&mark);
    if(mark>=80 && mark<=100)
    printf("A+",mark);
    else if(mark>=71&&mark<=79)
    printf("A",mark);
    else if(mark>=61 && mark<=70)
    printf("B",mark);
    else if(mark>=51&&mark<=60)
    printf("C",mark);
    else if(mark>=40 && mark<=50)
    printf("D",mark);
    else
    printf("F",mark);
    return 0;
}