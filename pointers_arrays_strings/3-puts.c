#include "main.h"
#include <stdio.h>

/**
 * _puts - check the code
 * @str: pointer
 * Return: nothing.
 */

void _puts(char *str)
{
char a = *str;

while (a != '\0')
{
_putchar (a);
}
_putchar ('\n');
}
