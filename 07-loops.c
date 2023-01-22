/*
In programming, a loop is used to repeat a
block of code until the specified condition is met.

C programming has three types of loops:

for loop
while loop
do...while loop
*/

/*
for Loop
The syntax of the for loop is:

for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}
How for loop works?
- The initialization statement is executed only once.
- Then, the test expression is evaluated. If the test
expression is evaluated to false, the for loop is terminated.
- However, if the test expression is evaluated to true,
statements inside the body of the for loop are executed, and
the update expression is updated.
- Again the test expression is evaluated.
This process goes on until the test expression is false.
When the test expression is false, the loop terminates.

Practice Program
Print Numbers 1 - 10
Calculate the sum
*/

/*
C while loop
The syntax of the while loop is:

while (testExpression) {
  // the body of the loop 
}
How while loop works?
The while loop evaluates the testExpression inside the parentheses ().
If testExpression is true, statements inside the body of while
loop are executed. Then, testExpression is evaluated again.
The process goes on until testExpression is evaluated to false.
If testExpression is false, the loop terminates (ends).

Practice Program
Print Numbers 1 - 10
*/

/*
do...while loop
The do..while loop is similar to the while loop with one important
difference. The body of do...while loop is executed at least once.
Only then, the test expression is evaluated.

The syntax of the do...while loop is:

do {
  // the body of the loop
}
while (testExpression);

How do...while loop works?
- The body of do...while loop is executed once. Only then, the testExpression is evaluated.
- If testExpression is true, the body of the loop is executed again and testExpression is evaluated once more.
- This process goes on until testExpression becomes false.
- If testExpression is false, the loop ends.

Practice Program
Ask for correct input continously
*/
