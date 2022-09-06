#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates character in string
 * @s: given string
 * @c: character
 * Return: string
 */
char *_strchr(char *s, char c)
{
int a;
while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}
