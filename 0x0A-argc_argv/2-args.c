#include <stdio.h>

/**
 *main - entry
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int counter;

	if (argc > 0)
		for (counter = 1; counter < argc; counter++)
			printf("%s\n", argv[counter]);

	return (0);
}
