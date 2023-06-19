#include <stdio.h>
#include "main.h"

void
print_alphabet_x10(void)
{
char a = 97;
int b = 0;
while (b <= 9)
{
for (a = 97; a < 123; a++)
{
_putchar(a);
}
}
_putchar('\n');
b++;
}
