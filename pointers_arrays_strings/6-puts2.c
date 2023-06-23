#include "main.h"
#include <stdio.h>

/**
 * puts2 - check the code
 * @str: pointer
 * Return: Nothing.
 */

void puts2(char *str)
{
int c = 0, s = 0;

while (str[c] != '\0')
c++;
c -= 1;

for (; s <= c; s += 2)
_putchar(str[s]);
_putchar('\n');
}
