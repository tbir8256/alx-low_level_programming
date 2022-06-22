#include "main.h"

/**
 * _strlen_recursion - gives length of string
 * @s: string parameter
 * Return: string length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
s++;
return (1 + _strlen_recursion(s));
}
