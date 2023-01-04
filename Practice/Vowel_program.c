#include<stdio.h>
int main()
{
    int ch;
    scanf("%c",&ch);
    if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
    printf("The alphabat is Vowel\n");
    else
    printf("The alphabat is consonant\n");
    return 0;
}