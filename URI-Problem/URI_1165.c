#include<stdio.h>
int main()
{
    int num,i,count=0,j;
    int t;
    scanf("%d",&t);  //t is  test case
    while(t--)
    {

        scanf("%d",&num);

        for(i=1; i<num; i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {

            printf("%d eh primo\n",num);
        }
        else
        {

            printf("%d nao eh primo\n",num);
        }
        count=0;

    }



    return 0;
}