#include "variadic_functions.h"
/**
 * print_strings - Print strings
 * @separator: Separator that includes "; " betweeen numbers
 * @n: string dated
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	va_list list;
	unsigned int counter;

	va_start(list, n);
	for (counter = 0; counter < n; counter++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (counter != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
