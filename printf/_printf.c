#include "main.h"
/**
 *_printf - Mimics standard printf
 *@format: format specified
 *@...: arguments
 *Return: chars to be printed
 */

int _printf(const char *format, ...)
{
	va_list arguments;
	int char_counter = 0;

	if (format == NULL)
		return (-1);
	va_start(arguments, format);
	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			char_counter++;
		}
		else
			format++;
		if (*format == '\0')
			break;
		if (*format == '%')
			char_counter += handle_percent();
		else if (*format == 'c')
			char_counter += handle_char(arguments);
		else if (*format == 's')
			char_counter += handle_str(arguments);
		format++;
	}

	va_end(arguments);
	return (char_counter);
}
