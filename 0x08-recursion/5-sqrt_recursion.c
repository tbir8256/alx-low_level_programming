#include "main.h"

/**
 * _sqrt_recursion - gives sqrt recursion
 * @n: number to nbe inside sqrt
 * Return: square of a number
 */
int _sqrt_recursion(int, int);
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
 * _sqrt - square root recursive
 * @n: number
 * @i: iterator
 */
int _sqrt(int n, int i)
{
int square = i * i;
if (square > n)
return (-1);
if (square == n)
return (i);
return (_sqrt_recursion(n, i + 1));
}
