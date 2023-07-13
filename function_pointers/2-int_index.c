#include "function_pointers.h"
int
int_index(int *array, int size, int (*cmp)(int))
{
	int q = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (q < size)
			{
				if (cmp(array[q]))
					return (q);
				q++;
			}
		}
	}
	return (-1);
}
