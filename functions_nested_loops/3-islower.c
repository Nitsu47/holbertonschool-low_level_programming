#include <stdio.h>
#include "main.h"
#include <ctype.h>

int
_islower(int c)
{
if (c <= 122 && c >= 97)
{
return (1);
}
else
{
return (0);
}
}
