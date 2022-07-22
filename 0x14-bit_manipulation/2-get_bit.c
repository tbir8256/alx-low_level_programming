#include "main.h"

/**
 * get_bit - gets the value of a bit at some index
 * @n: number to evaluate
 * @index: intex starting from 0, of the bit we want to get
 * Return: value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int hold;
if (index > 64)
return (-1);
hold = n >> index;
return (hold & 1);
}
