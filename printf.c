#include "main.h"
#include <stdio.h>
/**
 * _printf - functuin that prints all like the printf function in c
 * @fmt: the format in the printf
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printf(const char * fmt, ...)
{
    unsigned int i;
    unsigned int x;
    int  rest = 1;
    int count = 0 ;
    char l;
    char *ch;
    va_list argp;

    if (fmt == NULL || fmt[0] == '\0')
    {
        return(-1);
    }
    va_start(argp, fmt);
    while (*fmt)
    {
        if (*fmt != '%')
        {   
        count++;
        _putchar(*fmt);
        fmt++;
        }
        else
        {
            fmt++;
            if (*fmt == 'c')
            {
                l = va_arg(argp, int);
                count ++;
                _putchar(l);
            }
            else if (*fmt == 's')
            {
                ch = va_arg(argp, char*);
                for (i = 0; i < strlen(ch); i++)
                {
                    count ++;
                    _putchar(ch[i]);
                }   
            }
            else if (*fmt == 'd' )
            {
             l = va_arg(argp, int);
             x = l;
                if (l < 0)
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
                x =(x % rest);
                rest = rest / 10;
                count++;
            }
            }
            else if (*fmt == 'i' )
            {
             l = va_arg(argp, int);
             
                x = l;
                if (l < 0)
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
                x =(x % rest);
                rest = rest / 10;
                count++;
            }
            }
            else if (*fmt == '%')
            {
                _putchar('%');
            }
            fmt++;
        }
    }
    va_end (argp);
    return (count);

}

