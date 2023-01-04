#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int vow=0,cons=0,space=0,i;
    printf("Enter a string\n");
    gets(str);
    for(i=0; str[i] !='\0'; i++)
  
    {
        if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
        
        vow++;
        
       else if(str[i]==' ')
        
        space++;  
        
        else
        
        cons++;
        
      
    }
    
    printf("\nNumber of vowels= %d",vow);
    printf("\nNumber of Consonants =%d",cons);
    printf("\nNumber of Whitespace= %d",space);
    
    return 0;
}