#include <stdio.h>

/**
 *main - calculates sum of even valued
 *terms upto a limit of 4000000
 *
 *Return: 0
 */

int main(void)
{
	int fib1, fib2, nextFib;
	unsigned long sum = 2;

	fib1 = 1;
	fib2 = 2;

	for (;;)
	{
		nextFib = fib1 + fib2;

		if (nextFib > 4000000)
			break;

		if (nextFib % 2 == 0)
			sum += nextFib;

		fib1 = fib2;
		fib2 = nextFib;
	}

	printf("%lu\n", sum);

	return (0);
}
