#include <stdio.h>

/**
 *main - function that prints its name
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: name of the program
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
