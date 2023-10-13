#ifndef CALC_H
#define CALC_H

/**
 *struct op - struct op
 *
 *@op: operator
 *@f: function
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} opt_t;

/* Function prototypes */

int opt_add(int a, int b);
int opt_sub(int a, int b);
int opt_mul(int a, int b);
int opt_div(int a, int b);
int opt_mod(int a, int b);

#endif
