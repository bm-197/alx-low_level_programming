#ifndef CALC_H
#define CALC_H

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
 * struct operation -  structure
 * @opr: operator
 * @opfun: function
 */
 
typedef struct operation
{
	char *opr;
	int (*opfun)(int a, int b);
} opt_t;

#endif
