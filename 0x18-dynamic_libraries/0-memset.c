#include "main.h"

/**
 * _memset - memory set function
 * @s: string
 * @n: integer
 * @b: character
 * Return: integer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}
