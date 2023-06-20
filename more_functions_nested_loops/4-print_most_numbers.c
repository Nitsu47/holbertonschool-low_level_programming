#include "main.h"
#include <stdio.h>

void
print_most_numbers(void)
{
char c;
for (c = 48; c < 58; c++)
{
if ((c != 50) && (c != 52))
{
_putchar(c);
}
}
_putchar('\n');
}
