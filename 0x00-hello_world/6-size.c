#include <stdio.h>
/**
 * main - this program display the size of the different data types
 * return: 0 for main function
 */
int main(void)
{

char c;

int i;

long l;

long long ll;

float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));

printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));

printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));

printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));

printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);

}
