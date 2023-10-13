#include "variadic_functions.h"

/**
 *print_all - prints everything
 *@format: specifies types of arguments
 *@...: vector arguments
 *
 *Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	char *str;
	unsigned int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", separator, (float)va_arg(args, double));
			break;
		case 's':
		{
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("%s(nil)", separator);
			}
			else
				printf("%s%s", separator, str);
		}
		break;
		default:
			break;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
