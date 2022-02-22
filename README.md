# printf
# An implementation of printf() function in pure C programming language

## Overview

**_printf()** - is a 42 school group project. The task is to write a custom version of printf() from standard library.

Table of contents
=================

<!--ts-->
   * [Overview](#overview)
   * [Table of contents](#table-of-contents)
   * [General Requirements](#general-requirements)
   * [Authorized functions and macros](#authorized-functions-and-macros)
   * [Compilation](#compilation)
   * [Format Specifiers](#format-specifiers)
   * [Tasks](#tasks)
   * [Installation](#installation)
   * [Examples](#examples)
   * [Authors](#authors)
<!--te-->


*************************************************************************

## General Requirements

Here are the general requirements:

  - Allowed editors: vi, vim, emacs
  - Your programs and functions will be compiled with gcc using the flags **-Wall -Werror -Wextra**
  - All your files should end with a new line
  - You are not allowed to use global variables
  - No more than 5 functions per file
  - In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
  - The prototypes of all your functions should be included in your header file called **printf.h**
  - Don’t forget to push your header file
  - All your header files should be include guarded

******************************************************************************

## Authorized functions and macros

  - `write (man 2 write)`
  - `malloc (man 3 malloc)`
  - `free (man 3 free)`
  - `va_start (man 3 va_start)`
  - `va_end (man 3 va_end)`
  - `va_copy (man 3 va_copy)`
  - `va_arg (man 3 va_arg)`

******************************************************************************

## Compilation
  -  Your code will be compiled this way:
  ```$ gcc -Wall -Werror -Wextra -printf *.c```
  - As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
  - Our main files will include your main header file (`printf.h`): `#include printf.h`

*******************************************************************************

## Format Specifiers
Function name | Description | Format Specifier
--- | --- | ---
`print_char` | Prints a character | `%c`
`print_percent` | Prints a % | `%%`
`print_int` | Prints an integer | `%d` & `%i`
`print_string` | Prints a string | `%s`
`print_hex` | Prints hexadecimal in lowercase | `%x`
`print_HEX` | Prints hexadecimal in uppercase | `%X`
`print_unsigned` | Prints unsigned integer | `%u`
`print_address` | Prints a pointer | `%p`


*******************************************************************************

## Installation

In order to use this custom `_printf` function you need only `<unistd.h>` library
First, clone this repository to your local machine:
```
$ git clone https://github.com/mariekrulovva/printf.git
```

After cloning go to the printf folder

```
$ cd printf
```
You can compile it with your your C source code

```
$ gcc *.c your_C_source_code -o output
```
But the simplest solution is to make it portable, in other words to create a static library:
```
gcc *.c
ar -rc libprintf.a *.o
ranlib libprintf.a
```
Now you will have `printf.a` static library, and all you have to do is compile your code with this library:
```
gcc your_C_source_code -L. -lprintf
```

*****************************************************************************************************


## Examples
```
farrukh@ubuntu:~/printf$ cat main.c
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
farrukh@ubuntu:~/printf$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
farrukh@ubuntu:~/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
farrukh@ubuntu:~/printf$
```

*****************************************************************************************************

## Authors
- [Farrukh Akhrarov](https://github.com/narnat)
- [Arthur Damm](https://github.com/arthurdamm/twodoor) ~ [LinkedIn](https://www.linkedin.com/in/arthur-damm-96527042/) ~ [@arthurdamm](https://twitter.com/arthurdamm):
*Sharpening my skills at Holberton School of Software Engineering. I have a lifelong passion for programming with a background in mathematics and a daily meditation practice. Spent the last several
years enjoying working as a private tutor and am now excited to practice software wizardry professionally.*
