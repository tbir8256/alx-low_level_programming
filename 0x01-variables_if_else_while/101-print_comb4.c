#include <stdio.h>

/**
 * main - print three digits
 *
 * Description: prints three digits
 *
 * Retrun: returns 0 (sucessful)
 */

int main(void)
{
int i, j, k;

while (i < 58)
{
j = i + 1;
while (j < 58)
{
k = j + 1;
while (k < 58)
{
putchar(i);
putchar(j);
putchar(k);
if (i < 55 || j < 56 || k <57)
{
putchar(44);
putchar(32);
}
k++;
}
j++;
}
i++;
}
putchar(10);

return (0);
}
