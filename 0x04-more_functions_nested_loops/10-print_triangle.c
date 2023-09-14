#include "main.h"

/**
 *print_triangle - prints a tiangle followed by a new line
 *
 *@size: size of triangle
 *Return: void
 */

void print_triangle(int size)
{
	int row, j, h;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (j = size - row; j > 0; j--)
		{
			_putchar(' ');
		}
		for (h = 1; h <= row; h++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
