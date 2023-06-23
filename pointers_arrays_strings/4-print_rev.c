#include "main.h"
#include <stdio.h>

/**
 * print_rev -check the code
 * @s: pointer
 * return nothing
 */

void print_rev(char *s)
{
int a = 0;

while (s[a] != '\0')
{
a++;
}
while (a)
{
_putchar(s[--a]);
}
_putchar ('\n');
}
