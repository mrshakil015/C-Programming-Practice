/*Write a aprogram to copy one string into another and ciunt the number of characters copied.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20],str2[20];
    int i;
    printf("Enter a string\n");
    gets(str1);
    for(i=0; str1[i]!= '\0'; i++)
    str2[i]=str1[i];
    str2[i]='\0';
    printf("\n");
    printf("%s\n",str2);
    printf("Number of characters = %d\n",i);
   
    return 0;
}