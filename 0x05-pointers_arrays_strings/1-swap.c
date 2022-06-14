#include "main.h"
/**
 * swap_int - swap integers
 * @a: integer-1
 * @b: integer-2
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
