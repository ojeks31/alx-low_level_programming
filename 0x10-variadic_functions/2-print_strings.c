#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator:the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * @...: A variable number of numbers to be printed
 * Description: If separator is NULL, it is not printed.
 * If one of the strings if NULL, (nil) is printed instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;

	unsigned int index;
	char *str;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char);

	if (str == NULL)
		printf("nil");

	else
		printf("%s", str);

	if (index != (n - 1) && seperator != NULL)
		printf("%s", seperator);
	}

	printf("\n");

	va_end(strings)
}
