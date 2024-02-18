# C Programming Practice

<details>

<summary><b>C Programming Introduction:</b></summary>

C is a general-purpose, procedural programming language developed by Dennis Ritchie at Bell Labs in the early 1970s. It was designed to be a systems programming language but has since been used for a wide range of applications, including operating systems, compilers, embedded systems, and application software.

## <b>Getting Started With C Programming:</b>

+ <b>Set up Environment:</b>
  Install an Integrated Development Environment (IDE) such as Code::Blocks, Dev-C++, or Visual Studio Code with appropriate C extensions.
+ <b>Start with Simple Program:</b>

    ```c
    #include <stdio.h>

    int main() {
        printf("Hello, World!\n");
        return 0;
    }
    ```
Example:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char fatherName[100];
    char address[100];

    printf("Enter your name: ");
    scanf("%[^\n]",name);
    getchar();
    // fgets(name, sizeof(name), stdin);
    // gets(name);

    printf("Enter your father's name: ");
    // fgets(fatherName, sizeof(fatherName), stdin);
    scanf("%[^\n]",fatherName);
    getchar();
    //gets(fatherName);

    printf("Enter your address: ");
    // fgets(address, sizeof(address), stdin);
    scanf("%[^\n]",address);
    getchar();
    //gets(address);

    // Removing newline characters if present
    //name[strcspn(name, "\n")] = '\0';
    //fatherName[strcspn(fatherName, "\n")] = '\0';
    //address[strcspn(address, "\n")] = '\0';

    // Printing the entered details
    printf("\nEntered details:\n");
    printf("Name: %s\n", name);
    printf("Father's Name: %s\n", fatherName);
    printf("Address: %s\n", address);

    return 0;
}

```

</details>

<details>
<summary><b>Token in C</b></summary>
The smallest part of a C programming is called Token. The tokens of C language can be classified into six types based on the functions they are used to perform. The types of C tokens are as follows:

+ <code>Keyword</code>
+ <code>Identifier</code>
+ <code>Constant</code>
+ <code>String</code>
+ <code>Operator</code>
+ <code>Special Symbol</code>

### <b>Keyword in C</b>
---
The predefined reserved words of C Programming that have specific meaning for compiler are called keyword of C Programming. Keywords are part of the syntax and they cannot be used as an identifier. There are 32 keywords in C programming.

| Keywords  | Keywords  | Keywords  | Keywords  |
|-----------|-----------|-----------|-----------|
| auto      | double    | int       | struct    |
| break     | else      | long      | switch    |
| case      | enum      | register  | typedef   |
| char      | extern    | return    | union     |
| continue  | for       | signed    | void      |
| do        | if        | static    | while     |
| default   | goto      | sizeof    | volatile  |
| const     | float     | short     | unsigned  |

### <b>Identifier in C Programming</b>
---
Identifiers refer to the names of variables, functions, and arrays.
<b>Rules of Identifer:</b>

+ First character must be an alphabet or underscore(_).
+ Can only consists of letter, digit and underscore(_).
+ First 31 character are significant.
+ Cannot use keyword as Identifier.
+ Must not contain white space.

There are Two types of Identifiers:
+ Valid
+ Invalid


<b>Examples of Valid Identifiers:</b>

```c
int count;
float _total;
char MyVariable;
double average_score;
void calculateSum();
int num123;
float discount_rate;
```

<b>Examples of Invalid Identifiers:</b>

```c
int 123abc; // starts with a digit
float my-variable; // contains hyphen
char while; // keyword used as an identifier
double $price; // contains special character
char long variable; // contains space
```

</details>
