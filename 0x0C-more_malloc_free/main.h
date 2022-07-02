#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);

/**
 * error_exit - prints error with _putchar
 * and exits with 98
 * Return: returns 98 with & exit(98)
 */
int error_exit(void)
{
char *err;
int i;
err = "Error";
for (i = 0; err[i] != '\0'; i++)
_putchar(err[i]);
_putchar('\n');
}

/**
 * 101-mul.c
 * check_number - checks if string
 * has only numbers
 * @str: string to check
 * Return: returns 0 f true and
 * 1 if false
 */
int check_number(char *str)
{
while (*str != '\0')
{
if (*str < '0' || *str > '9')
return (1);
str++;
}
return (0);
}

/**
 * _length - get the length of strings
 * @str: string to get length
 * Return: length of string
 */
int _length(char *str)
{
int i = 0;
while (str[i] != '\0')
i++;
return (i);
}

#endif
