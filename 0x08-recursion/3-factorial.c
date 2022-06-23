#include "main.h"

/**
 * factorial - gives factorial
 * @n: number
 * Return: returns integer
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n <= 1)
return (1);
return (n *factorial(n-1));
}
