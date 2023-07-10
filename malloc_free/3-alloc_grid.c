#include "main.h"
#include <stdlib.h>
#include <string.h>

int
**alloc_grid(int width, int height)
{
	int x = 0;
	int w = 0;
	int **array;

	array = (int **)malloc(sizeof(int *) * width);

	if (array == NULL)
		return (NULL);

	if (width <= 0 || height <= 0)
		return (NULL);

	while (w < height)
	{
		array[w] = (int *)malloc(sizeof(int) * width);
		if (array[w] == NULL)
		{
			while (w >= 0)
			{
				free(array[w]);
				w--;
			}
			free(array);
			return (NULL);
		}
		w++;
	}
	w = 0;
	while (w < height)
	{
		for (x = 0; x < width; x++)
			array[w][x] = 0;
		w++;
	}
	return (array);
}
