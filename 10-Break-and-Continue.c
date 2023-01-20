/*
    Break
The break statement is used to exit out of a loop if a
particular condition is met.

Its syntax is:
break;

The break statement is almost always used
with if...else statement inside the loop.

Example
int i;

for (i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
}

The above code terminates when i is 4.

*/

/*
    Continue
The continue statement breaks one iteration
(in the loop), if a specified condition occurs,
and continues with the next iteration in the loop.

Syntax:
continue;

This example skips the value of 4:

Example
int i;

for (i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  printf("%d\n", i);
}

*/