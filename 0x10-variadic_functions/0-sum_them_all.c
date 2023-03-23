#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - the sum of all its parameters.
 * @n: Used to count number of variable argument passed
 * @...: A variable number of paramters to calculate the sum of.
 * Return: 0 If n == 0
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	int i, su

		for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end;
		return (sum);

}
