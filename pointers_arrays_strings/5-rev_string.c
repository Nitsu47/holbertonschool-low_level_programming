#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code
 * @s: pointer
 * Return: Nothing.
 */

void rev_string(char *s)
{
int l = 0;
int r = 0;
char p;
while (s[l] != '\0')
{
l++;
}
while (r < l--)
{
p = s[r];
s[r++] = s[l];
s[l] = p;
}
}
