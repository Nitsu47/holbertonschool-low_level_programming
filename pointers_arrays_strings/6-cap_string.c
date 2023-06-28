#include "main.h"

/**
 * cap_string - check the code
 * @a: pointer
 * Return: Always 0.
 */

char *cap_string(char *a)
{
int up;

	for (up = 0; a[up] != '\0'; up++)
	{
		if (a[up] > 96 && a[up] < 123)
		{
			if (a[up - 1] == ' ' ||
					a[up - 1] == '\t' ||
					a[up - 1] == '\n' ||
					a[up - 1] == ',' ||
					a[up - 1] == ';' ||
					a[up - 1] == '.' ||
					a[up - 1] == '!' ||
					a[up - 1] == '?' ||
					a[up - 1] == '{' ||
					a[up - 1] == '}' ||
					a[up - 1] == '(' ||
					a[up - 1] == ')' ||
					a[up - 1] == '"' ||
					up == 0)
			{
				a[up] = a[up] - 32;
			}

		}
	}
	return (a);
}
