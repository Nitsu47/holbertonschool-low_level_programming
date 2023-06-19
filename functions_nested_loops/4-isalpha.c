#include <stdio.h>
#include "main.h"
#include <ctype.h>

int
_isalpha(int c)
{
if (c <= 122 && c >= 65)
{
return (1);
}
else
{
return (0);
}
}
