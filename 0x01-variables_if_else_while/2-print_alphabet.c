#include <stdio.h>

/**
 *main - prints the alphabet in lowercase
 *
 *Return: 0
 */

int main(void)
{
	int alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
