#include <stdio.h>

/**
 *main - lowercase alphabet in reverse
 *
 *Return: 0
 */

int main(void)
{
	int alpha;

	for (alpha = 122; alpha >= 97; alpha--)
		putchar(alpha);

	putchar('\n');
	return (0);
}
