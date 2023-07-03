#include "main.h"
#include <stdio.h>

int
main(int argc, char *argv[])
{
	(void) argv;

	argc--;
	printf("%d\n", argc);

	return (0);
}
