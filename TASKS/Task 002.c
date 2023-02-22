/* Write your program after the comment
Write a program that asks and reads the score of a user
If the score is less than 80, display to the user that they
are not elgible to be enrolled.
If the score is greater than or equal 80, they can be enrolled.
*/

#include <stdio.h>



int main() {
    
    

int score;
    

printf("Enter your Score: ");
    
scanf("%d", &score);
    
    

if (score < 80){
        
printf("you are not eligible to be enrolled");
    
}
    
    
if (score >= 80){
        
printf("you are eligible to be enrolled");
    
}
    

return 0;

}