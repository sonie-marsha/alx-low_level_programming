#include "main.h"

/**
 *is_prime_recursive - checks if int is a prime number recursively
 *@n: int to be checked
 *@div: divisor being checked
 *
 *Return: 1 if prime o/w 0
 */

int is_prime_recursive(int n, int div)
{
	if (n <= 1)
		return (0);
	if (div == 1)
		return (1);
	if (n % div == 0)
		return (0);

	return (is_prime_recursive(n, div - 1));
}

/**
 *is_prime_number - checks if n is a prime number
 *@n: int to be checked
 *
 *Return: 1 if prime o/w 0
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, n / 2));
}
