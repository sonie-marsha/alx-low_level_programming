#include "main.h"

/**
 *handle_str - handles s specifier
 *@args: arguments
 *
 *Return: 1 on success
 */

int handle_str(va_list args)
{
	char *str;
	int len = 0;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return (0);
	}

	while (str[len])
	{
		putchar(str[len]);
		len++;
	}

	return (len);
}
