#include <stdio.h>

/**
 *main - base 16 numeric and alphabet
 *
 *Return: 0
 */

int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
