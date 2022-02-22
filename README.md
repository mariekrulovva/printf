# Printf


**printf()** - is a 42 school group project. The task is to write a custom version of printf() from standard library.

____
## Table of contents

<!--ts-->
   * [Common Instructions](#common-instructions)
   * [Function Prototype](#function-prototype)
   * [Mandatory Part](#mandatory-part)
   * [Bonus Part](#bonus-part)
   * [General Requirements](#general-requirements)
   * [Authorized functions and macros](#authorized-functions-and-macros)
   * [Compilation](#compilation)
   * [Format Specifiers](#format-specifiers)
   * [Installation](#installation)
<!--te-->
____

### Common Instructions
* Your project must be written in accordance with the Norm. If you have bonus files/functions, they are included in the norm check and you will receive a 0 if there is a norm error inside.
* Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. If this happens, your project will be considered non functional and will receive a 0 during the evaluation.
* All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated.
* If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror, use cc, and your Makefile must not relink.
* Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.
* To turn in bonuses to your project, you must include a rule bonus to your Makefile, which will add all the various headers, librairies or functions that are forbidden on the main part of the project. Bonuses must be in a different file _bonus.{c/h}.
Mandatory and bonus part evaluation is done separately.
* If your project allows you to use your libft, you must copy its sources and its associated Makefile in a libft folder with its associated Makefile. Your project’s Makefile must compile the library by using its Makefile, then compile the project.
* We encourage you to create test programs for your project even though this work **won’t have to be submitted and won’t be graded**. It will give you a chance to easily test your work and your peers’ work. You will find those tests especially useful during your defence. Indeed, during defence, you are free to use your tests and/or the tests of the peer you are evaluating.
* Submit your work to your assigned git repository. Only the work in the git repository will be graded. If Deepthought is assigned to grade your work, it will be done after your peer-evaluations. If an error happens in any section of your work during Deepthought’s grading, the evaluation will stop.
____
### Function Prototype
```
int ft_printf(const char *, ...);
```
____
### Mandatory Part

Program name | libftprintf.a
--- | ---
Turn in files | Makefile, *.h, */*.h, *.c, */*.c
Makefile | NAME, all, clean, fclean, re
External functs. | malloc, free, write, va_start, va_arg, va_copy, va_end
Libft authorized | Yes
Description  | Write a library that contains ft_printf(), a function that will mimic the original printf()

You have to recode the printf() function from libc.

Here are the requirements:
* Don’t implement the buffer management of the original printf().
* Your function has to handle the following conversions: cspdiuxX%
* Your function will be compared against the original printf().
* You must use the command ar to create your library. Using the libtool command is forbidden.
* Your libftprintf.a has to be created at the root of your repository.

You have to implement the following conversions:
* %c Prints a single character.
* %s Prints a string (as defined by the common C convention).
* %p The void * pointer argument has to be printed in hexadecimal format.
* %d Prints a decimal (base 10) number.
* %i Prints an integer in base 10.
* %u Prints an unsigned decimal (base 10) number.
* %x Prints a number in hexadecimal (base 16) lowercase format.
* %X Prints a number in hexadecimal (base 16) uppercase format.
* %% Prints a percent sign.
____
### Bonus Part

You don’t have to do all the bonuses.

Bonus list:
* Manage any combination of the following flags: ’-0.’ and the field minimum width under all conversions.
* Manage all the following flags: ’# +’ (Yes, one of them is a space).

💡 If you plan to complete the bonus part, think about the implementation of your extra features from the start. This way, you will avoid the pitfalls of a naive approach.

❗ The bonus part will only be assessed if the mandatory part is PERFECT. Perfect means the mandatory part has been integrally done
and works without malfunctioning. If you have not passed ALL the mandatory requirements, your bonus part will not be evaluated at all.
____
### General Requirements

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

____

### Authorized functions and macros

  - `write (man 2 write)`
  - `malloc (man 3 malloc)`
  - `free (man 3 free)`
  - `va_start (man 3 va_start)`
  - `va_end (man 3 va_end)`
  - `va_copy (man 3 va_copy)`
  - `va_arg (man 3 va_arg)`

____

### Compilation
  -  Your code will be compiled this way:
  ```$ gcc -Wall -Werror -Wextra -printf *.c```
  - As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
  - Our main files will include your main header file (`printf.h`): `#include printf.h`

____

### Format Specifiers
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

____

### Installation

In order to use this custom `printf` function you need only `<unistd.h>` library First, clone this repository to your local machine:
```
git clone https://github.com/mariekrulovva/printf.git
```

After cloning go to the printf folder

```
cd printf
```
You can compile it with your your C source code

```
gcc *.c your_C_source_code -o output
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
