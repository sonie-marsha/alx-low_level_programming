#include "3-calc.h"

/**
 *get_op_func - returns a ptr to the function that
 *corresponds with operator given as parameter
 *@s: operator passed as argument
 *
 *Return: a ptr
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add);
		{"-", op_sub);
		{"*", op_mul);
		{"/", op_div);
		{"%", op_mod);
		{NULL, NULL);
	};
	int i;
}
