#include "main.h"
/**
 * _sqrt - calculates the square root of a number
 *
 * @n: a number
 *
 * @r: root of n
 *
 * Return: r if n is natural number, -1 if not
 */
int _sqrt(int r, int n)
{
	if (r * r > n)
	{
		return (-1);
	}
	if (r * r == n)
	{
		return (r);
	}
return (_sqrt(r + 1, n));
}

/**
 * _sqrt_recursion - makes _sqrt recursive
 *
 * @n: number
 *
 * Return: r = 1, n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
