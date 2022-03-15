#include "main.h"
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