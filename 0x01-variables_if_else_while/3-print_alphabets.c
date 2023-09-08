#include <stdio.h>

/**
 *main - prints alphabet in lowercase followed
 *by uppercase
 *
 *Return: 0
 */

int main(void)
{
	int lc, up;

	lc = 'a';
	up = 'A';

	while (lc <= 122)
	{
		putchar(lc);
		++lc;
	}
	while (up <= 90)
	{
		putchar(up);
		++up;
	}

	putchar('\n');

	return (0);
}
