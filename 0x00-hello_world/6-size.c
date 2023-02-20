#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	printf("size of data char: %ld\n", sizeof(char));
	printf("size of data int: %ld byte(s)\n", sizeof(int));
	printf("size of data long int: %ld byte(s)\n", sizeof(long int));
	printf("size of data long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of data float: %ld byte(s)\n", sizeof(float));
	return (0);
}

