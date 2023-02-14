/*
 Write a program in C to find the square of any number
using the function.
*/
int sq_num(x)
{
    return (x * x);
}

int main(void)
{
    int x;
    
    printf("input a number: ");
    scanf("%i", &x);
    printf("The square of %i is %i", x, sq_num(x));
    return (0);
}