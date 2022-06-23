#include "main.h"
int _sqrt(int, int);

/**
 * _sqrt_recursion - gives sqrt recursion
 * @n: number to nbe inside sqrt
 * Return: square of a number
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}


/**
 * _sqrt - square root recursive
 * @n: number
 * @i: iterator
 * Return: returns the number
 */
int _sqrt(int n, int i)
{
int square = i * i;
if (square > n)
return (-1);
if (square == n)
return (i);
return (_sqrt(n, i + 1));
}
