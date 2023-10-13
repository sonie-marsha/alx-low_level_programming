#include "function_pointers.h"

/**
 *int_index - returns the index of the first element for which
 *cmp function does not return 0
 *@size: number of elements in an array
 *@cmp: ptr to the function to be used to compare values
 *@array: an array of elements
 *
 *Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result = -1;
	int comp_res;

	if (array && cmp)
	{
		if (size <=  0)
			return (result);
	}
	for (i = 0; i < size; i++)
	{
		comp_res = cmp(array[i]);
		if (comp_res > 0)
			result = i;
		break;
		if (comp_res == (-1))
			return (result);
	}

	return (result);
}
