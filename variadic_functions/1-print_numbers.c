#include "variadic_functions.h"
/**
 * print_numbers - Prints the numbers dated
 * @separator: Separator that includes ", " between numbers
 * @n: Numbers dated
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int counter;

	va_start(num, n);
	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(num, int));

		if (counter != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
