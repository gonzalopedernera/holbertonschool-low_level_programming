#include "main.h"
#include <stddef.h>
/**
 * power - calculates base to the power of exp
 *
 * @base: base of the operation
 *
 * @exp: exponent of the operation
 *
 * Return: result of the operation
 */
unsigned int power(int base, int exp)
{
	unsigned int res = 1;
	int i;

	if (exp == 0)
	{
		return (1);
	}
	else
	{
		for (i = 0; i < exp; i++)
		{
			res *= base;
		}
	}
	return (res);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: binary number
 *
 * Return: the converted number or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0, j = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		i++;
	}
	i--;

	while (i >= 0)
	{
		if (b[i] == '1')
			res += power(2, j);
		j++;
		i--;
	}
	return (res);
}
