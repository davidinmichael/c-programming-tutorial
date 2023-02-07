/*
    Definition of Array
An array is a data structure containing data values of the same type.
Note: A data structure is a format for organizing, storing and
retrieving data.

    Understanding the definition of array
arr = 5, 6, 6, 7 // This is correct, it holds values of same type
arr = 'a', 'b', 'c' // This is correct, it holds values of same type
arr = 5, 't', 4.5, 55 // This is wrong, it holds values of different
    data types.
    
    Introduction to one dimensional array
One dimensional array is the simplest form an array, example;
arr = 5, 6, 7, 8, 9 

    How to declare and define one dimensional array
syntax;
data_type name_0f_array[no. of elements];
Example, to declare an array to hold 5 integers;
int scores[5];

NOTE: The length of an array can be specified by any positive integer
constant expression, examples;
int arr[5];
int arr[4+2];
int arr[4*5];
int arr[8-2];
int arr[20/4];
The length of an array should not result to a float or double.

    How to access the array element
To access the elements in an array, write;
array_name[index] // Index refers to the position of the array, and
it starts from 0, example;
int scores[5] = {4, 5, 6, 7}; // The index of 4 is 0, and the index of
7 is 3.

To access the number 5,
scores[1]

    How to initialize one dimensional array
Method 1:
int arr[5] = {3, 4, 5, 6, 7}; // Here, the length is specified
Method 2:
int arr[] = {3, 4, 5, 6, 7}; // Here, the length is not specified, and
so, it can store any length of values.

NOTE: Do not enter values and exceed the limit specified

    Designated Initializers
This is placing numbers at a designated position in the array.
Example;
int numbers[10] = {[0] = 1, [4] = 5, [7] = 8}; // Here, we have an
array of size 10. The elements in the square brackets is the designator,
which tells what position to assign the values, after doing this,
the rest of the position is filled with zero.
This is a great way to initialize an array elements.

*/