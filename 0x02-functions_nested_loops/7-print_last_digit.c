#include "main.h"

/**
 * print_last_digit -> return last digit
 * @n: passed arguments
 * Return: the last digit
 */

int print_last_digit(int n)
{
int m;
if (n < 0)
m = -n;
m = n % 10;
_putchar(m + '0');
return (m);
}
