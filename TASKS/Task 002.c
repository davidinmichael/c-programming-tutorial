/* Write your program after the comment
Write a program that asks and reads the score of a user
If the score is less than 80, display to the user that they
are not elgible to be enrolled.
If the score is greater than or equal 80, they can be enrolled.
*/
int main()
{
    int check;
    
    printf("What is your score ?");
    scanf("%i", &check);// take user score
    user_score(check);
    return (0);
}

void user_score(int score)
{
    // check if score is less than 80
    if (score < 80)
    {
        printf("You are not eligible");
    }
    else// above 80 
    {
        printf("You are eligible");
    }
}