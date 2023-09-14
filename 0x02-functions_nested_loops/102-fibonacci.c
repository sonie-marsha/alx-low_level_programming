#include <stdio.h>

/**
 *main - prints out the first 50 fibonacci numbers
 *followed by a new line
 *
 *Return: 0
 */

int main(void)
{
	unsigned long fib1, fib2, nextFib;
	int i;

	fib1 = 1;
	fib2 = 2;

	printf("%lu, %lu, ", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		nextFib = fib1 + fib2;

		printf("%lu, ", nextFib);

		fib1 = fib2;
		fib2 = nextFib;
	}
	printf("\n");

	return (0);
}
