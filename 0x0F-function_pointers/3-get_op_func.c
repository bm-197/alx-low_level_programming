#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function selector
 * @s: oprator
 * Return: oprator function
 */

int (*get_op_func(char *s))(int, int)
{
        opt_t oprs[] = {
                {"+", op_add};
                {"-", op_sub};
                {"*", op_mul};
                {"/", op_div};
                {"%", op_mod};
                {NULL, NULL};
        };
        while(ops[i].opr != NULL && *(ops[i].opr) != *s)
                i++;
        return (ops[i].opfun);
}
