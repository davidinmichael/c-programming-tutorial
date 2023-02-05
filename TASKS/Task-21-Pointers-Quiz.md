What is the purpose of pointers in C programming languages?

ANSWER
===

Pointers are useful resources. A pointer holds the address of a variable through which the variable being pointed to can be directly manipulated. Both pointer variable and the variable being pointed to must be of the same datatype.

What is the difference between a pointer and a regular variable in C programming languages?

ANS
===

The major difference between a regular variable and a pointer variable is that a regular variable passes data by the value stored in it while the pointer passes data by referencing the address of the variable being pointed to.
---

How do you declare a pointer in C programming languages?

ANS
===

To declare a pointer in C programming language,

`datatype * pointername;`

e.g `int * ptr;`

To avoid gibberish values it is good to initialize your pointer:

`int * ptr = NULL;`

but to make it point to a variable or memory location

`int * ptr = &variablename;`
---

How do you access the value stored at the memory address pointed by a pointer in C programming languages?

ANS
===

You maken use of the asterisk
e.g
```c
int * ptr = &num;
printf("%d", *ptr); // this will print the value in num;
```
---

What is a null pointer in C programming languages?

ANS
===

Null pointers are pointers thst have been declared but not pointing to a particular memory location or address. They are initialized with the value NULL.
---

How do you declare pointers to pointers in C programming languages?

ANS
===

You declare pointer to pointers using double asterisks
e.g

`int **ptr;`
---

What is the relationship between pointers and arrays in C programming languages?

ANS
===

The relationship between a pointer and an array is that both hold addresses to a location or memory space.
A pointer holds the address of the variable it is pointing to while the arrayname serves as a pointer to the memory space it has been allocated to keep for a particular size of element of the same datatype.

---

What is dynamic memory allocation in C programming languages and how is it achieved using pointers?

ANS
===

Dynamic allocation of memory is allocating memory at the time of execution (run time). The functions calloc() and malloc() support allocating of dynamic memory.
---

How do you deallocate dynamically allocated memory in C programming languages?

ANS
===

`free(variable);`
