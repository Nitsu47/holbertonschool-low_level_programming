#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strlen - check the code-strlen.c.swp"
*@s: pointer
* Return: nothing.
*/
int
_strlen(char *s)
{
int l = 0;

while (s[l] != '\0')
l++;
return (l);
}
