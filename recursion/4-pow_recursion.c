#include "main.h"
/**
 * _pow_recursion - returns x to the power of y
 *
 * @x: a number
 *
 * @y: a number
 *
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	res = x * _pow_recursion(x, y - 1);
	return (res);
}
