#include "main.h"
/**
 * prime - calculates if the input is a prime number or not
 *
 * @n: number
 *
 * @i: multiplier
 *
 * Return: 1 if prime, 0 if not prime
 */
int prime(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime(n, i - 1));
}
/**
 * is_prime_number - assign a value to i
 *
 * @n: a number
 *
 * Return: n, i = n - 1
 */
int is_prime_number(int n)
{
	return (prime(n, n - 1));
}
