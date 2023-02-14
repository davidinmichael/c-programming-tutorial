/*
Write a program in C to check a given number is even
or odd using the function.
*/
int main(void)
{
    int num;

    printf("Input a number \n");
    scanf("%i", &num);
    even_odd(num);
    return (0);
}

void even_odd(int check)
{
    if (check % 2 == 0)
    {
        printf("This an even number");
    }
    else
    {
        printf("This is an odd number");
    }
}