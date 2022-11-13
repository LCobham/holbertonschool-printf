C -  _printf

NAME:
_printf()

SYNOPSIS
#include <main.h>

int _printf(const char *format, ...);

DESCRIPTION:
We created our own version of printf. The _printf function recieves as input a string with different conversion specifiers (which will appear with a '%' followed by a letter representing a conversion specifier) and prints out the given sting to standard output. Instead of printing the conversion specifiers, optional arguments are retrieved using the variable-length argument facilities of stdarg(3).

If too many arguments are passed (i.e. more arguments than conversion specifiers), additional arguments will be ignored. If the number of arguments passed is lower than the number of conversion specifiers in the string, _printf will either print garbage values for the specifiers that have no match, or segfault (most common when a string is passed as a format and no argument is given).


RETURN:
The return value of _printf corresponds to the number of printed characters on succes. When NULL is passed ad the format string to print, _printf will print "(nil)" to stdout and  return  -1.
When the format string includes a '%' followed by a null character, the program will also return -1 (but previous characters of format speficiers in the string will be printed).


Conversion specifiers:

The accepted conversion specifiers are detailed below..

<table style="width:75%">
  <tr>
    <td>Specifiers</td>
    <td>Functions</td>
  </tr>
  <tr>
    <td>'c'</td>
    <td>Prints a character, passed as an additional arg</td>
  </tr>
   <tr>
    <td>'s'</td>
    <td>Prints a string, passed as an additional arg</td>
  </tr>
   <tr>
    <td>'d'</td>
    <td>Prints a decimal number (base-10). Wrong result on int overflow</td>
  </tr>
   <tr>
    <td>'i'</td>
    <td>Prints an integer (base-10). Wrong result on int overflow</td>
  </tr>
   <tr>
    <td>'%'</td>
    <td>Prints a single percent sign</td>
  </tr>
     <tr>
    <td>'b'</td>
    <td>Interprets arg as unsigned int and prints it in binary</td>
  </tr>
     <tr>
    <td>'u'</td>
    <td>Prints arg as an unsigned int</td>
       <tr>
    <td>'o'</td>
    <td>Interprets arg as unsigned int and prints it in octal</td>
       <tr>
    <td>'x'</td>
    <td>Interprets arg as unsigned int and prints it in hexadecimal (lowercase letters)</td>
    <tr>
    <td>'X'</td>
    <td>Interprets arg as unsigned int and prints it in hexadecimal (uppercase letters)</td>
    <tr>
    <td>'S'</td>
    <td>Prints a string. Non_printable characters printed as "0x" followed by ASCII code in hexadecimal</td>
    <tr>
    <td>'p'</td>
    <td>Prints a memory address (in lowercase hexadecimal). Begins with "0x"</td>
    <tr>
    <td>'r'</td>
    <td>Prints a given string in reverse</td>
    <tr>
    <td>'R'</td>
    <td>Prints a given string encoded with ROT13</td>
  </tr>
</table>


EXAMPLES:

_printf("A simple string, with no conversion specifiers.");
Output: A simple string, with no conversion specifiers.


_printf("Unused args are not printed.", "Hello");
Output: Unused args are not printed.


_printf("Print a single percent sign: %%.");
Output: Print a single percent sign: %.


_printf("Here we have a conversion specifier %c", '!');
Output: Here we have a conversion specifier !


_printf("This prints %s", "a string.");
Output: This prints a string.


_printf("This happens when NULL is passed: %s.", NULL);
Output: This happens when NULL is passed: (null).


_printf("These two digits are different: %d & %i.", 5, 17);
Output: These two digits are different: 5 & 17.


_printf("Example of int overflow: %d.", 2147483647 + 1);
Output: Example of int overflow: -2147483648.


_printf("The number 15 in octal is %o.", 15);
Output: The number 15 in octal is 17.


_printf("The number 13 in binary is %b.", 13);
Output: The number 13 in binary is 1101.


_printf("Lets print 167 in hexadecimal: %x = %X.", 167, 167);
Output: Lets print 167 in hexadecimal: a7 = A7.


_printf("%S", "Hello there\n.")
Output: Hello there\x0A.


_printf("%r", ".I'm in reverse!");
Output: !esrever ni m'I.


_printf("Hi %R", "reader.")
Output: Hi ernqre.


Files used:

main.h --- It has all the macros, libraries used, structures and function prototypes.

get_of_func.c

op_functions.c

format_specifiers1.c

format_specifiers2.c

math.c 

All of this files have auxiliars functions. The ones that handled the printing of different conversion specifiers were included in the array of structures, in get_op_fun.c (see Flowchart).

This is a Flowchart of how it functions:

Authors:
Lucas Cobham
Carolina Molina
