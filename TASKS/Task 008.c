/*write your solution after the comment
Write a function that prints the alphabet, in lowercase
followed by a new line.
*/
void print_abc(char abc)
{
    abc = 'a';

    while (abc <= 'z')
    {
        printf("%c ", abc);
        abc++;
    }
    printf("\n");
}

int main(void)
{
    char abc = 'a';
    
    print_abc(abc);
    return (0);
}