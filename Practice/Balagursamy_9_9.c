/*
s1, s2 and s3 are three string variables. write a program to read string constants into s1 and s2 and compare whether they are equal or not.If yhey are not,  join them together. Then copy the constants of s1 to s3 variable. At the end,  the program should print the contents of all the three variables and their lengths.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20],s3[20];
    int x, len1,len2,len3;
    printf("\n\nEnter two string constants\n");
    printf("?");
   /// scanf("%s %s",s1,s2);
    gets(s1);
    gets(s2);
    x=strcmp(s1,s2);
    if(x!=0)
    {
        printf("\n\nString are not equal\n");
        strcat(s1,s2);
    }
    else
    printf("\n\nString are equal\n");
    strcpy(s3,s1);
    len1=strlen(s1);
    len2=strlen(s2);
    len3=strlen(s3);
    printf("\ns1 = %s\t length = %d characters\n",s1,len1);
    printf("\ns2 = %s\t length = %d characters\n",s2,len2);
    printf("\ns3 = %s\t length = %d characters\n",s3,len3);
    
}