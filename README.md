# C Programming Practice

<details>

<summary><b>C Programming Introduction:</b></summary>

C is a general-purpose, procedural programming language developed by Dennis Ritchie at Bell Labs in the early 1970s. It was designed to be a systems programming language but has since been used for a wide range of applications, including operating systems, compilers, embedded systems, and application software.
</details>

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

``