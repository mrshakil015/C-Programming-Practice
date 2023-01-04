/*
Illustration of variable field sppecifications by printing sequence of characters.


Printing sequences of characters-1

S
Sh
Sha
Shak
Shaki
Shakil
Shaki
Shak
Sha
Sh
S

Printing sequences of characters-2

     S
    Sh
   Sha
  Shak
 Shaki
Shakil
 Shaki
  Shak
   Sha
    Sh
     S

Printing sequences of characters-3

S |
Sh |
Sha |
Shak |
Shaki |
Shakil |
Shaki |
Shak |
Sha |
Sh |
S |

Printing sequences of characters-4

S |
 S |
  S |
   S |
    S |
     S |
    S |
   S |
  S |
 S |
S |



*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[ ]= "Shakil";
    int i,d;
    printf("\nPrinting sequences of characters-1\n\n");
    for(i=0; i<=5; i++)
    {
        d=i+1;
        printf("%1.*s\n",d,str);
    }
   for(i=4; i>=0; i--)
    {
        d=i+1;
        printf("%1.*s\n",d,str);
    }
    printf("\nPrinting sequences of characters-2\n\n");
    
    for(i=0; i<=5; i++)
    {
        d=i+1;
        printf("%6.*s\n",d,str);
    }
   for(i=4; i>=0; i--)
    {
        d=i+1;
        printf("%6.*s\n",d,str);
    }
    
     printf("\nPrinting sequences of characters-3\n\n");
    
    for(i=0; i<=5; i++)
    {
        d=i+1;
        printf("%.*s |\n",d,str);
    }
    
   for(i=4; i>=0; i--)
    {
        d=i+1;
        printf("%.*s |\n",d,str);
    }
    
    printf("\nPrinting sequences of characters-4\n\n");
    
    for(i=0; i<=5; i++)
    {
        d=i+1;
        printf("%.1*s |\n",d,str);
    }
   for(i=4; i>=0; i--)
    {
        d=i+1;
        printf("%.1*s |\n",d,str);
    }
    return 0;
}