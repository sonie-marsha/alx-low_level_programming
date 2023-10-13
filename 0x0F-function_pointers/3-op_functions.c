#include "3-calc.h"

/**
 *op_add - addition
 *@a: num1
 *@b: num2
 *
 *Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtraction
 *@a: num1
 *@b: num2
 *
 *Return: subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplication
 *@a: num1
 *@b: num2
 *
 *Return: multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_mul - division
 *@a: num1
 *@b: num2
 *
 *Return: division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf ("Error\n");
		exit(100);
	}

	return (a / b);
}

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
