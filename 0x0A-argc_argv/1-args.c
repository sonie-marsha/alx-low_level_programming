#include <stdio.h>

/**
 *main - prints number of arguments passed to it
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: number of arguments
 */

int main(int argc, char **argv)
{
	printf("%d\n", (argc - 1));

	return (0);
}
