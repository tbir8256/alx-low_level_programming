#include <stdio.h>

/**
 * main - prints double digit pairs
 *
 * Description: prints double digit pairs
 *
 * Return: returns 0 (sucessful)
 */

int main(void)
{
int i, j, k, m;

i = 48;
{
while (j < 58)
{
m = j + 1;
k = i;
while (k < 58)
{
while (m < 58)
{
putchar(i);
putchar(j);
putchar(32);
putchar(k);
putchar(m);
if (i < 57 || j < 56 || k < 57 || m < 57)
{
putchar(44);
putchar(32);
}
m++;
}
m = 48;
k++;
}
j++;
}
i++;
}
putchar(10);
return (0);
}
