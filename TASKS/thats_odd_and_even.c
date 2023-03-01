/** Write your program after the comment
 *Odd and Even - You want to take a list of numbers and find the sum of all of the even numbers in the list. Ignore any odd numbers.
Task:
Find the sum of all even integers and sum of odd integers in a list of numbers.
Input Format:
The first input denotes the length of the list (N). The next N lines contain the list elements as integers.

 * */

#include <stdio.h>

int main() {
    int n, num, sum_even=0, sum_odd=0;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    printf("Enter the integers: ");
    for (int i=0; i<n; i++){
        scanf("%d", &num);
        if (num%2 ==0){
            sum_even += num;
        }
        else {
            sum_odd += num;
        }
    }
    printf("Sum of even intgers: %d\n", sum_even);
    printf("Sum of odd integers: %d\n", sum_odd);
    return 0;
}
