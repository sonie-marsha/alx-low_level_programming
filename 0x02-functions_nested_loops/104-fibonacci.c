#include <stdio.h>

/**
 *main - prints the first 98 fibonacci numbers
 *
 *Return: 0
 */

int main(void)
{
	unsigned long int fib1, fib2, nextFib;
	int i;

	fib1 = 1;
	fib2 = 1; /* Initialized fib2 to 1 to print it out */

	for (i = 2; i < 100; i++)
	{
		printf("%lu, ", fib2);

		nextFib = fib1 + fib2;

		fib1 = fib2;
		fib2 = nextFib;
	}

	printf("\n");

	return (0);
}
