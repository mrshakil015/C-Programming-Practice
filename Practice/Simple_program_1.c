/*monae koro user 100 debae... but oita output 200 korae dakha tae hobae...
And oi 200 ar moddae 20 porjonto even number print korae compilor ar kaj korvae na..
sample input:
100
Output:
2 4 6 8 10 12 14 16 18 20
*/
#include<stdio.h>
int main()
{
    int i,trem;
    printf("Enter the trem:\n");
    scanf("%d",&trem);
    for(i=1; i<=trem*2; i++)
    {
        
       if(i%2==0)
     {
        printf("%d ",i);
      
       if(i==20)
       
        break;
       
      }
        
    }
}