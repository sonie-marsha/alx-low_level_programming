#include <stdio.h>

/**
 *main - prints alphabet skips q and e
 *
 *Return: 0
 */

int main(void)
{
	int lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'q' && lc != 'e')
			putchar(lc);
	}
	putchar('\n');

	return (0);
}
