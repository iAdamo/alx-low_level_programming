## [0x0F. C - Function pointers :file_folder:](0x0F-function_pointers)

## TASKS: :page_with_curl:

#### [0. What's my name](https://github.com/iAdamo/alx-low_level_programming/tree/main/0x0F-function_pointers/0-print_name.c)

- Write a function that prints a name.

- Prototype: void print_name(char *name, void (*f)(char *));

#### [1. If you spend too much time thinking about a thing, you'll never get it done](https://github.com/iAdamo/alx-low_level_programming/tree/main/0x0F-function_pointers/1-array_iterator.c)

- Write a function that executes a function given as a parameter on each element of an array.

- Prototype: void array_iterator(int *array, size_t size, void (*action)(int));

- where size is the size of the array and action is a pointer to the function you need to use

#### [2. To hell with circumstances; I create opportunities](https://github.com/iAdamo/alx-low_level_programming/tree/main/0x0F-function_pointers/2-int_index.c)

- Write a program that performs simple operations.

- You are allowed to use the standard library
Usage: calc num1 operator num2
- You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
- operator is one of the following:
  - +: addition
  - -: subtraction
  - *: multiplication
  - /: division
%: modulo
- The program prints the result of the operation, followed by a new line
- You can assume that the result of all operations can be stored in an int
- if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
- if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
- if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100

This task requires that you create four different files.

[3-calc.h]()

- This file should contain all the function prototypes and data structures used by the program. You can use this structure:
