/*
In C programming, a variable modifier is a keyword used to specify
the type of storage a variable should have. The following are the
most commonly used variable modifiers in C:

auto: By default, a variable is auto and can be used without
specifying the keyword.
Example:
auto int a;

register: This modifier suggests that the compiler should store the
variable in a register, instead of memory. The compiler will decide
whether or not to follow this suggestion.
Example:
register int a;

static: This modifier tells the compiler to store the variable in
static memory, instead of automatic memory. This means that the value
of the variable will persist between function calls.
Example:
static int a;

extern: This modifier declares a variable that is defined in another
source file. It is used to access variables in another source file.
Example:
extern int a;

volatile: This modifier is used to inform the compiler that the
value of the variable may change in ways not specified by the code.
This is useful for accessing hardware registers and memory-mapped I/O.
Example:
volatile int a;
*/