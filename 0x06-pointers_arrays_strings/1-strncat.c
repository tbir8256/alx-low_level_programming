#include "main.h"
#include <string.h>

/**
 * _strncat - appedn some chars
 * @dest number 1
 * @src: number 2
 * @n: number 3
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
