#include "main.h"

/**
 * _pow_recursion - power recursion
 * @x: x powered y
 * @y: expoonent
 * Return: returns result
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
