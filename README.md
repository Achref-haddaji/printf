  _printf
in this project we are going to recreate the C standard library printf function as a part of the curriculum of software programming module at holberton school.
  Descreption 
   our _printf function has as prototype :
 int _printf(const char *format, ...);
   C language standard functions allowed:
 write (man 2 write)
 va_start (man 3 va_start)
 va_arg (man 3 va_arg)
 va_end (man 3 va_end)
   Compilation 
 our code is compiled this way: 
  $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
   Usage 
 to use the _printf function you need to compile all files.c including the header main.h with a main function .
  Returne of _printf 
 in case of success _printf returns an  integer value, wich is the total number of printed characters. 
	Format tags used in _printf : 
  c ==> characters 
  s ==> string of characters 
  d ==> int to signed decimal 
  % ==> no conversion writes '%'

