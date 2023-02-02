/*
In C programming, the scope of a variable refers to the portion of
the program where the variable is accessible and can be used.
There are two types of variable scopes in C:

1. Global scope: Variables declared outside of all functions, at
the top level of a source code file, are known as global variables.
These variables are accessible throughout the entire program and
can be used in any function.
Example:
#include <stdio.h>

int a = 10; // Global variable

int main() {
    int b = 20; // Local variable
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    return 0;
}
In this example, the variable a has global scope, which means it can
be accessed from any function within the program.


2. Local scope: Variables declared within a function or a block are
known as local variables. They are only accessible within the
function or block in which they are declared and cannot be accessed
outside of it.
Example:
#include <stdio.h>

int main() {
    int outBox = 10; // Local variable

    if (outBox == 10)
    {
        int roomBox = 20; // Local variable within the if block
        printf("Value of outBox: %d\n", outBox);
        printf("Value of roomBox: %d\n", roomBox);
    }
    // printf("Value of b: %d\n", roomBox);  This line will cause an error, because the scope of b is limited to the if block
    return 0;
}

In this example, the variable roomBox has local scope, which means it can
only be accessed within the if block where it is declared. If you
try to access roomBox outside of the if block, the program will cause
an error.

It is important to understand the scope of a variable as it can
affect how you can use the variable within your program and can
also impact the behavior of your program.

*/