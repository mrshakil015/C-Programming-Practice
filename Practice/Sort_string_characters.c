/*
C Sort String Characters

Here your task is to sort all characters of your entered string in alphabetical order. For example, if user entered a string "orange", you should reply back with a string "aegnor"
*/
#include <stdio.h> 
#include <ctype.h> 
#include <string.h> 
int main() 
    { 
    int i, j, len, k = 0, len1; 
    char text[30], store[30]; 
    printf("Enter a String : "); 
    gets(text); 
    len = strlen(text); 
    printf("Sorted Characters alphabetically : "); 
    for(i = 65;i <= 90;i++) 
        { 
        for(j = 0;j < len;j++) 
          { 
            if(text[j] == toupper(i) || text[j] == tolower(i)) 
               { 
                store[k] = text[j]; k++; 
                } 
            }
         }
     len1 = strlen(store); 
    for(i = 0;i <= len1;i++) 
    printf("%c", store[i]); 
    return 0; 
    }