#include <stdio.h>
#include "main.h"
#include <ctype.h>

int
_isupper(int c)
{
if (c <= 90 && c >= 65)
{
return (1);
}
else
{
return (0);
}
}
