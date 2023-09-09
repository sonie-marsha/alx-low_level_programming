#include <stdio.h>

/**
 *main - prints combination of two digits
 *
 *Return: 0
 */

int main(void)
{
	int digit_ones, digit_tens;

	for (digit_ones = 0; digit_ones < 9; digit_ones++)
	{
		for (digit_tens = digit_ones + 1; digit_tens < 10; digit_tens++)
		{
			putchar(digit_ones + '0');
			putchar(digit_tens + '0');

			if (digit_ones != 8 || digit_tens != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
