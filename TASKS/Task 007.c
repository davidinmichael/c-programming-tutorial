/*
write your solution after the comment
Write a function that prints the alphabet, in uppercase,
followed by a new line.
*/

void print_abc(char abc)
{
    abc = 'A';

    while (abc <= 'Z')
    {
        printf("%c ", abc);
        abc++;
    }
    printf("\n");
}

int main(void)
{
    char abc = 'A';
    
    print_abc(abc);
    return (0);
}