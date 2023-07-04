#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	int r = 0;
	int c = 1;
	int n = 0;

	while (c < argc)
	{
		while (argv[c][n])
		{
			if (argv[c][n] < 48 || argv[c][n] > 59)
			{
				printf("Error\n");
				return (1);
			}
			n++;
		}
		n = 0;
		r += atoi(argv[c]);
		n++;
	}
	printf("%d\n", r);
	return (0);
}
