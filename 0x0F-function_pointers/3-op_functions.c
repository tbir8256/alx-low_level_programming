#include "3-calc.h"
/**
 * op_add - calculates the sum of integers
 * @a: first int
 * @b: second int
 * Return: returns sum of a & b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - calculates the difference of two integers
 * @a: first int
 * @b: second int
 * Return: returns difference of a & b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - calculates the product of two integers
 * @a: first int
 * @b: second int
 * Return: returns product of a & b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - calculates the divisionn of two integers
 * @a: first int
 * @b: second int
 * Return: returns division of a & b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: first int
 * @b: second int
 * Return: returns remainder of a divided by b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
