#include "main.h"
/**
 * _memcpy - memory copy function
 * @dest: destination character
 * @src: source character
 * @n: number of bytes to be copied
 * Return: string copied form source
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
dest[a] = src[a];
return (dest);
}
