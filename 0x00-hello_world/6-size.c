#include <stdio.h>
/**
 * main - this program display the size of the different data types
 * return: 0 for main function
 */

int main(void)

{

	printf("Size of a char: %zu byte(s)\n", sizeof(char));

	printf("Size of an int: %zu byte(s)\n", sizeof(int));

	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));

	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));

	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);

}
