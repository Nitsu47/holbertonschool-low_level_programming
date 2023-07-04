#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int
main(int argc, char *argv[])
{
	int r = 0;
	int c;
	int n;

	while (argc-- > 1)
	{
		for (c = 0; argv[argc][c]; c++)
		{
			if (!(isdigit(argv[argc][c])))
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(argv[argc]);
		r += n;
	}
	printf("%d\n", r);
	return (0);
}
