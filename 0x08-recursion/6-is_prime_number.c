#include "main.h"

/**
 * checker - prime number
 * @x: int
 * @y: int
 * Return: int
 */

int checker(int x, int y)
{
	if (x % y == 0)
	{
		return (0);
	}
	else if (x / 2 < y)
	{
		return (1);
	}
	return (checker(x, y + 1));
}
/**
 * is_prime_number - prime number checker
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if (n < 2 || n == 0)
	{
		return (0);
	}
	return (checker(n, 2));
}
