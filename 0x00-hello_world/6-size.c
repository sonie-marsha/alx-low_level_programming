#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 */

int main(void)
{
	char a;
	int i;
	long int j;
	long long int k;
	float d;

	printf("Size of a char: &ld byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(j));
	printf("Size of a long long int: %d byte(s)\n", sizeof(k));
	printf("Size of a float: %d byte(s)\n", sizeof(d));

	return (0);
}
