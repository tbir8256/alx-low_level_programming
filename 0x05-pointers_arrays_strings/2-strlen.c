#include "main.h"
#include <string.h>

/**
 * _strlen - length of a string
 * @s: string pointer to passed
 * Return: return length of string
 */
int _strlen(char *s)
{
int len;
for (; *s != '\0'; s++)
{
len += 1;
}
return (len);
}
