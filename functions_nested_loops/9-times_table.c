#include <stdio.h>
#include "main.h"

void
times_table(void)
{
int x, y;

for (x = 0; x < 10; x++)
{
for (y = 0; x < 10; y++)
{
int z = x * y;
if ((x / 10) == 0)
{
putchar (' ');
}
putchar ((z / 10) + '0');
putchar ((z % 10) + '0');
if (x == 9)
{
break;
}
putchar (',');
putchar (' ');
}
putchar ('\n');
}
}
