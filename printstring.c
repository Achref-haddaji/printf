#include "main.h"
/**
 * printstring - writes the character c to stdout
 * @ch: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int printstring(char *ch)
{
int k;

 if (ch == NULL)
{
 ch = "(null)";
}
 else
{
for (k = 0; ch[k] != '\0'; k++)
{
_putchar(ch[k]);
}
}
return (k);
}   