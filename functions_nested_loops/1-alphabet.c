#include <stdio.h>
#include "main.h"

void print_alphabet(void)
{
char a = 97;

for (a = 97; a < 127; a++)
{
_putchar(a);
}
_putchar('\n');
}
