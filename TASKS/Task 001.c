#include <stdio.h>

int main() {
    char i;
    for (i = 'a'; i <='z'; ++i)
    if (i != 'e' && i != 'q')
    printf("%c", i);

    return 0;
}
