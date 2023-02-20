#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	printf("size of data char: %lu/n", sizeof(char));
	printf("size of data int: %lu byte(s)/n", sizeof(int));
	printf("size of data long int: %lu byte(s)/n", sizeof(long int));
	printf("size of data char: %lu byte(s)/n", sizeof(long long int));
	printf("size of data float: %lu byte(s)/n", sizeof(float));
	return (0);
}

