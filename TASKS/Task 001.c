/* Write your program after the comment
Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e

use printf
*/


#include <stdio.h>

int main()
 {
    for (int i = 'a'; i <= 'z'; i++)
        {
        if (i == 'q' || i == 'e') {
            continue;
        }
        printf("%c ", (char)i);
    }
    return 0;
}

