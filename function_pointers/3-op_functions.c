#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adds two numbers
 *
 * @a: number
 *
 * @b: number
 *
 * Return: result
 */
int op_add(int a, int b)
{
	return ((a + b));
}
/**
 * op_sub - substracts two numbers
 *
 * @a: number
 *
 * @b: number
 *
 * Return: result
 */
int op_sub(int a, int b)
{
	return ((a - b));
}
/**
 * op_mul - multiplies two number
 *
 * @a: number
 *
 * @b: number
 *
 * Return: result
 */
int op_mul(int a, int b)
{
	return ((a * b));
}
/**
 * op_div - divides two numbers
 *
 * @a: number
 *
 * @b: number
 *
 * Return: result
 */
int op_div(int a, int b)
{
	return ((a / b));
}
/**
 * op_mod - calculates a modulo b
 *
 * @a: number
 *
 * @b: number
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	return ((a % b));
}
