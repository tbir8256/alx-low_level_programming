#include "main.h"

int check_prime(int, int);

/**
 * is_prime_number - pirme number
 * @n: number
 * Return: retursn prime number
 */
int is_prime_number(int n)
{
return (check_prime(n, 1));
}

/**
 * check_prime - checks prime nos
 * @n: number
 * @i: iterator
 * Return: 1 or zero
 */
int check_prime(int n, int i)
{
if (n <= 1)
return (0);
if (n % i == 0 && i > 1)
return (0);
if ((n / i) < i)
return(1);
return (check_prime(n, i + 1));
}
