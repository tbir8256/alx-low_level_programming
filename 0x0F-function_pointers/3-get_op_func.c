#include "3-calc.h"
/**
 * get_op_fun - function pointer htat selects the correct
 * function to perform the operation that user asked
 * @s: The operator given by the user
 * Return: returns pointer to the function
 * that corresponds to the oprator giben as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (i < 5)
{
if (s[0] == ops[i].op[0])
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
