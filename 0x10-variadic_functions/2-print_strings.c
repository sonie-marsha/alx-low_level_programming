#include "variadic_functions.h"

/**
 *print_strings - print str separated by a separator
 *@separator: str to be printed
 *@n: number of strings passed as functions
 *@...: vector arguments
 *
 *Return: separator if null don not print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
