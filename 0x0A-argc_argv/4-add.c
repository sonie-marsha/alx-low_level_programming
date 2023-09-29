#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry
 *@argc: count
 *@argv: vectors
 *
 *Return: 0
 */

int main(int argc, char **argv)
{
	int i, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
		for (num = 0; argv[i][num]; num++)
			if (argv[i][num] < '0' || argv[i][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);

	printf("%d\n", sum);

	return (0);
}
