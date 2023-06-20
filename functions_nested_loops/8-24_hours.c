#include <stdio.h>
#include "main.h"

void
jack_bauer(void)
{
int h;
int t;
for (h = '0'; h < 24; h++)
{
for (t = '0'; t < 60; t++)
{
putchar('0' + (h / 10));
putchar('0' + (h % 10));
putchar (':');
putchar('0' + (t / 10));
putchar('0' + (t % 10));
putchar('\n');
}
}
}
