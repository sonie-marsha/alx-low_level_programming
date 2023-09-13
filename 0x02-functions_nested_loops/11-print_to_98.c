#include <stdio.h>

/**
 *print_to_98 - prints natural numbers from n to 98
 *@n: input
 *
 *Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
				continue;
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
				continue;
			printf("%d, ", n);
		}
	}

	printf("\n");
}
