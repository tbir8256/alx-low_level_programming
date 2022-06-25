#include<stdio.h>
#include<stdlib.h>

/**
 * main - a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: returns sucess
 */
int main(int argc, char *argv[])
{
int result = 0, n1, n2;
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
result = n1 * n2;
printf("%d\n", result);
return (0);
}
