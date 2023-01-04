/*Write a aprogram to copy one string into another and ciunt the number of characters copied.
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20],str2[20];
    int len1,len2;
    printf("Enter a string\n");
    gets(str1);
    
    strcpy(str2,str1);
    
    len2=strlen(str2);
    
    printf("\n%s \nNumber of Characters =%d",str2,len2);
   
    return 0;
}