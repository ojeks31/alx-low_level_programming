#include "variadic_functions.h"
/**
 * sum_them_all - the sum of all its parameters.
 * @n: used to count number of variable argument passed
 * Return: nothing
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
