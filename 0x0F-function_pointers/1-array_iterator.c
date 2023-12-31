#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a parameter on each element
 *of an array
 *@array: array
 *@size: size of the array
 *@action: ptr to function to execute
 *
 *Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
