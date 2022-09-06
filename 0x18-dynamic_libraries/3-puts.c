#include "main.h"
/**
 * _puts - puts something
 * @str: a string in _puts function
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
