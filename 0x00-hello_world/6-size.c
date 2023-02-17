#include <stdio.h>
/**
 * main - Entry point
 * evaluate the size of variable
 * Reture: Always 0 (success)
 */
int main(void)
{
	printf("Size of char: %zu byte\n", sizeof(char));
	printf("Size of an int: %zu byte\n", sizeof(int));
	printf("Size of a long int: %zu byte\n", sizeof(long int));
	printf("Size of a long long int: %zu byte\n", sizeof(long long int));
	printf("Size of float: %zu byte\n", sizeof(float));
	return (0);
}
