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

### <b>Keyword in C Programming</b>
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

### <b>Constant in C Programming</b>
---
The constants refer to the variables with fixed values. They are like normal variables but with the difference that their values can not be modified in the program once they are defined.

<b>Types of Constant:</b>
Primarily, there are three types of Constant:

+ Integer Constant --> -1,2,4,6
+ Real Constant --> 10.00, 23.50
+ Character Constant --> 'a','$'

### <b>String in C Programming</b>
---
Strings are nothing but an array of characters ended with a null character (‘\0’). This null character indicates the end of the string. Strings are always enclosed in double quotes.

```c
char string[20] = {'a','b', '\0'};
char string[20] = "programming";
char string [] = "programming";
```

### <b>Operator in C Programming</b>
---
Operators are symbols used to perform operations on operands. They include arithmetic operators (+, -, *, /, %), relational operators (==, !=, <, >, <=, >=), logical operators (&&, ||, !), assignment operators (=, +=, -=, *=, /=), etc.

### <b>Special Symbols in C Programming</b>
---
Symbols include various symbols used for punctuation and separation within the program. Examples include semicolons (;), commas (,), parentheses (()), braces ({}), brackets ([]), etc.


</details>

<details>
<summary><b>Variable</b></summary>

### <b>Variable in C Programming</b>
---
Variable is the name of a memory location which stores some data. It is a container. Each variable has a specific data type, which determines the type of data it can hold (such as integers, floating-point numbers, characters, etc.)

<b>Syntax of declaring a variable:</b>
```c
data_type variable_name;
```
<b>Example:</b>

```c
int num = 10;
char grade = 'A';
float point = 3,5;
```
<b>Rules of Variable Names:</b>

+ Names can contain letters, digits and underscores
+ Names must begin with a letter or an underscore (_)
+ Names are case-sensitive (myVar and myvar are different variables)
+ Names cannot contain whitespaces or special characters like !, #, %, etc.
+ Keywords (such as int) cannot be used as names

</details>