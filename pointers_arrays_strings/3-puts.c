#include "main.h"
#include <stdio.h>

/**
 * _puts - check the code
 * @str: pointer
 * Return: nothing.
 */

void _puts(char *str)
{

int a = 0;

while (str[a] != '\0')
{
_putchar (str[a]);
a++;
}
_putchar ('\n');
}
