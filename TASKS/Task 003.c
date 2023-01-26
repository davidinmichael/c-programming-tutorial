/* Write your program after the comment
Write a program that reads input from user (Number)
If the number is Odd, display 'userInput is Odd'
If the number is even, display 'userInput is even'
If the number is zero, display 'This is zero'

NOTE: 'userInput' should be the number entered by the user.

*/
void read_int(int num)
{
    // check if num is even
    if (num % 2 == 0)
    {
        printf("%i is an even number\n", num);
    }
    else if (num % 2 == 1)
    {
        printf("%i is an odd number\n", num);
    }
    else if (num == 0)
    {
        printf("The number is Zero (%i)\n", num);
    }
    else
    {
        printf("unknown input!\n");
    }
}

int main(void)
{
    int check;
    
    printf("Choose your lucky number!: ");
    scanf("%i", &check);
    read_int(check);
    return (0);
}