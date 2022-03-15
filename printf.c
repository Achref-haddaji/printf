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
             count+= _printnumber(l);

            }
            else if (*fmt == 'i' )
            {
             l = va_arg(argp, int);
             count += _printnumber(l);
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

