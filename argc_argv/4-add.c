#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	int r = 0;
	int c = 1;

	while (c < argc)
	{
			if (argv[c] < 48 || argv[c] > 59)
			{
				printf("Error\n");
				return (1)
	}
		printf("%d\n", r);
		return (0);
	}
