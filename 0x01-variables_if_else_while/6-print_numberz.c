#include <stdio.h>

/**
 *main - prints 0-9 using putchar
 *
 *Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0'); /* converts to ASCII */
	}
	putchar('\n');

	return (0);
}
