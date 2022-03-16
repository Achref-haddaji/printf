#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
    int a;
    a = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    printf("\n%d", a);
    printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    return (0);
  
}
