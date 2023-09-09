#include <stdio.h>

/**
 *main - prints all combinations of
 *two digits
 *
 *Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0'); /* converts the int to its corresponding character representation */
		if (num == 9)
			continue;
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0); /* program exits with no error */
}
