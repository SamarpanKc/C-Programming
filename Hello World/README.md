# Hello World in C

This repository contains a simple "Hello World" program written in C.

## Program Explanation

The `hello.c` file contains the following code:

```c
// WAP to print 'Hello World!'

#include <stdio.h>
int main() {
    printf("Hello World!");
    return 0;
}
```
## Line-by-Line Explanation
1. `// WAP to print 'Hello World!'`
This is a comment. Comments are ignored by the compiler and are used to provide explanations or notes about the code. In this case, it indicates the purpose of the program.
2. `include <stdio.h>`
This line includes the Standard Input Output library in C. The `stdio.h` library contains functions for input and output, such as `printf`.
3. `int main() {`
This is the beginning of the main function. Every C program must have a main function because it is the starting point of the program.
4. `printf("Hello World!");`
This line calls the printf function, which prints the specified string to the console. In this case, it prints `Hello World!`.
5. `return 0;`
This line terminates the main function and returns a value of 0 to the operating system. The return value 0 typically signifies that the program has executed successfully.
6. `}`
This is the closing brace of the main function, indicating the end of the function.

## Summary
- The `#include <stdio.h>` directive is necessary for using the `printf` function.
- The `main` function is the entry point of the program.
- The `printf("Hello World!");` statement prints the text "Hello World!" to the console.
- The `return 0;` statement ends the program and indicates that it executed successfully.
