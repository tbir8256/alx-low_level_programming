#include "main.h"

/**
 * _strcar - function strcat
 * @dest: first number
 * @src: second number
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
int l = 0, i;
while (dest[l])
l++;
for (i = 0; src[i] != 0; i++)
{
dest[l] = srd[i];
l += 1;
}
dest[l] = '\0';
return (dest);
}
