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

int i = 0, j = 0;

while (*(dest + i))
{
i++;
}
while (*(src + j) != '\0' && j < n)
{

*(dest + i) = src[j];
i++;
j++;
}
return (dest);
}
