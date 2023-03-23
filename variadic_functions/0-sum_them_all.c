#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all of its parameters
 *
 * @n: number of args to take
 *
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	int num, res = 0;
	unsigned int i;

	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		res += num;
	}
	va_end(args);
	return (res);
}
