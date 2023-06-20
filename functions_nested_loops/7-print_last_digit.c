#include <stdio.h>
#include "main.h"

int
print_last_digit(int n)
{
int lastdigit
lastdigit = abs(n % 10);
{
_putchar ('0' + lastdigit);
}
	return (lastdigit);
}
