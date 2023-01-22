/*write your solution after the comment
Write a function that computes the absolute
value of an integer.
Understand what an absolute value is, before attempting it.
*/

#include <stdio.h>

int absoluteValue(int num)
{
     num;

        if (num < 0)
        {
        return -num;
        }
    else {
        return num;
    }
}

int main()
{
    int num = -9;
    int number_abs = absoluteValue(num);
    printf("The absolute value of %d is %d\n", num, number_abs);
    return 0;
}
//The output will be the absolute value of -9

/*
also,
	we can ask user for input
bellow will be the program
*/

#include <stdio.h>
int absoluteValue(int num)
{
	num;
	if(num<0)
{
	return -num;
}
else {
return +num;
}
}
 int main ()
{
 int num;
printf("Please enter your number");
scanf("%d", &num);

int digit_abs= absoluteValue();
printf("The absolute value of %d is %d\n", num,digit_abs);
}


