#include <stdio.h>
#include "main.h"

void
jack_bauer(void)
{
int h, t;
for (h = 0; h < 24; h++)
{
for (t = 0; t < 60; t++)
{
_putchar('0' + (h / 10));
_putchar('0' + (h % 10));
_putchar(':');
_putchar('0' + (t / 10));
_putchar('0' + (t % 10));
_putchar('\n');
}
}
}
