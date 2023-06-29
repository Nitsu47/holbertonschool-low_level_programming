#include "main.h"

/**
 * _print_rev_recursion - check the code
 * @s: pointer
 * Return: Nothing.
 */

void _print_rev_recursion(char *s)
{
int l = 0;

	if (s[l] == '\0')
	{
		return;
	}
	_print_rev_recursion(s);
	l++;
}
