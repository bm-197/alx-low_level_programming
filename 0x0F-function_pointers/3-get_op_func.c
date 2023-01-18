#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function selector
 * @s: operator
 * Return: operator functions
 */

int (*get_op_func(char *s))(int, int)
{
        opt_t oprs[] = {
                {"+", op_add},
                {"-", op_sub},
                {"*", op_mul},
                {"/", op_div},
                {"%", op_mod},
                {NULL, NULL}
        };
        int i = 0;
        while(oprs[i].opr != NULL && *(oprs[i].opr) != *s)
                i++;
        return (oprs[i].opfun);
}
