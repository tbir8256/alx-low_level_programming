#include "main.h"

/**
 * _strpbrk - search string for any bytes
 * @s: source string
 * @accept: accepted charcters
 * Return: string since the first found accepted character
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int a = 0, b;
while (s[a])
{
b = 0;
while (accept[b])
{
if (s[a] == accept[b])
{
s += a;
return (s);
}
b++;
}
a++;
}
return ('\0');
}
