#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 1024

/* Write a program to reverse a string. */

void rev_string ()
{
        char *str;
        int count = 0;

        str = (char *)malloc(sizeof(char) * (BUFSIZE + 1));
        printf("Enter a string of text:\t");
        scanf("%[^\n]%*c", str);

        for (count = 0; str[count] != '\0'; count++)
        {}
        for (count -= 1; count >= 0; --count)
                printf("%c", str[count]);
        printf("\n");

        free(str);
}


int main(void)
{
        rev_string();

        return (0);
}