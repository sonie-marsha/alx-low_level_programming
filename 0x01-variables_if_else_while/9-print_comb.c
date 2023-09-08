#include <stdio.h>

/**
 *main - prints all combinations of
 *two digits
 *
 *Return: 0
 */

int main(void)
{
	int num1;

	for (num1 = 0; num1 < 10; num1++)
	{
		putchar(num1 + '0'); /* converts to its ascii value */
		if (num1 != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0); /* program exits with no error */
}
