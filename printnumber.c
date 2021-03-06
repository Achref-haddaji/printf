#include "main.h"
/**
 * _printnumber - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printnumber(int n)
{
    int count = 0, rest = 1;
    unsigned int x;
    x = n;
    if (n < 0)
    {
        _putchar('-');
        x = -x;
        count++;
    }
    while ((x / rest) > 9)
    {
        rest = rest * 10;
    }
    while (rest > 0)
    {
        _putchar(x / rest + '0');
        x = (x % rest);
        rest = rest / 10;
        count++;
    }
    return (count);
}









