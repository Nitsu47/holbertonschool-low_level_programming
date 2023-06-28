#include "main.h"

/**
 * cap_string - check the code
 * @a: pointer
 * Return: Always 0.
 */

char *cap_string(char *a)
{
int up = 0;

	while (a[up])
	{
		if (a[up] >= 97 && a[up] <= 122)
		{
			if (a[up] == 0)
			{
			a[up] = a[up] - 32;
			}
			switch (a[up + 1])
			{
				case 3:
				case 9:
				case 10:
				case 44:
				case 59:
				case 46:
				case 33:
				case 63:
				case 34:
				case 40:
				case 41:
				case 123:
				case 125:
				a[up] = a[up] - 32;
			}
		}
		up++;
	}
	return (a);
}
