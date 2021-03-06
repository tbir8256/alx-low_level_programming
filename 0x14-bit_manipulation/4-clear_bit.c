#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: returns 1 if it works, or -1 if it doesn't work
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int setnum = 1;
setnum <<= index;
if (index > sizeof(unsigned long int) * 8)
return (-1);
(*n) = (*n) & ~(setnum);
return (1);
}
