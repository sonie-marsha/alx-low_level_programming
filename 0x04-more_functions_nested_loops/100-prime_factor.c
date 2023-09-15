#include <stdio.h>
#include <math.h>

/**
 *is_prime - checks if number is prime
 *ensuring the largest factor is indeed prime
 *@n: number to check
 *
 *Return: 1 if prime, o/w 0
 */

int is_prime(long n)
{
	long i;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	for (i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
	}

	return (1);
}

/**
 *main - entry point
 *
 *Return: (0)
 */

int main(void)
{
	long i;
	long number = 612852475143;

	for (i = (long)sqrt(number); i > 1; i--)
	{
		if (number % i == 0 && is_prime(i))
		{
			printf("%ld\n", i);
			break;
		}
	}

	return (0);
}
