#include <stdio.h>

int main (void)
{

/*
    Nested Loops
A nested loop means a loop statement inside another
loop statement. That is why nested loops are also
called “loop inside loops“. We can define as many loops
as we want inside of our loops.


Syntax:

for ( initialization; condition; increment ) {

   for ( initialization; condition; increment ) {
      
      // statement of inside loop
   }

   // statement of outer loop
}

Syntax:

while(condition) {

   while(condition) {
      
      // statement of inside loop
   }

   // statement of outer loop
}

Practice Problem
FizzBuzz
*/
printf("FizzBuzz if divided by both 5 & 3.\nFizz is divided by 3.\nBuzz if divided by 5\n");
for (int i = 1; i <= 100; i++)
{
	if ( i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz ");
	else if (i % 5 == 0)
		printf("Buzz ");
	else if (i % 3 == 0)
		printf("Fizz ");
	else
		printf("%d ", i); 
}
putchar('\n');
/*
int n = 6;// variable declaration  
   //printf("Enter the value of n :");  
   // Displaying the n tables.  
   for(int i=1;i<=n;i++)  // outer loop  
   {  
       for(int j=1;j<=10;j++)  // inner loop  
       {  
           printf("%d\t",(i*j)); // printing the value.  
       }  
       printf("\n");  
   }
*/

return (0);
}
