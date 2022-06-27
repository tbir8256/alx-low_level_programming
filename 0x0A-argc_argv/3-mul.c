#include <stdio.h>

#include <stdlib.h>

/**
 * main - this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command lists
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
int result, num1, num2;
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}
