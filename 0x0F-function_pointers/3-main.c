#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main - entry point
 *@argc: no of args
 *@argv: vector
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
}
