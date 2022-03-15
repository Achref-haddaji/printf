#include "main.h"
int _printnumber(int n)
{
    int count = 0, rest = 1;
    unsigned int x;
    x = n;
    if (n < 0)
    {
        _putchar('-');
        x = -n;
        count++;
    }
    else 
    {
        x = n;
    }
    while ((x / rest) > 9)
    {
        rest = rest * 10;
    }
    while (rest != 0)
    {
        _putchar(x / rest + '0');
        x = (x % rest);
        rest = rest / 10;
        count++;
    }
    return (count);
}