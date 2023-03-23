#include <stdio.h>


int add(a, b);
int sub(a, b);
int mul(a, b);
int div(a, b);
int mod(a, b);
/**
 * add - adds two number
 * @a: first num
 * @b: second num
 * Return: the sum of a and b
 */

int add(a, b)
{
	return (a + b);
}

/**
 * sub - subs two number
 * @a: first num
 * @b: second num
 * Return: the sub of a and b
 */
int sub(a, b)
{
	return (a - b);
}

/**
 * mul - product of two numbers
 * @a: first num
 * @b: second num
 * Return: the product of two numbers
 */

int mul(a, b)
{
	return (a * b);
}

/**
 * div - return the qoutient of a and b
 * @a: first num
 * @b: second num
 * Return: the quotient
 */

int div(a, b)
{
	return (a / b);
}

/**
 * mod - the modulus of two number
 * @a: fisrt num
 * @b: second num
 * Return: the reminder
 */

int mod(a, b)
{
	return (a % b);
}
