#include "main.h"

/**
 * checker - square root
 * @x: int
 * @y: int
 * Return: int
 */

int checker(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	if (x * x > y)
	{
		return (-1);
	}
	return (checker(x + 1, y));
}

/**
 * _sqrt_recursion -  square root
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (checker(1, n));
}
