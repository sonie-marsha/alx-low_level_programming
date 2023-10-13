#include "function_pointers.h"

/**
 *print_name - function that prints a name
 *@name: input name
 *@f: ptr to function
 *
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f) /* checks if name and f is NULL */
		f(name);
}
