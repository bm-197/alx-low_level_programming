#include <stdio.h>


int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);
/**
 * add - adds two number
 * @a: first num
 * @b: second num
 * Return: the sum of a and b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subs two number
 * @a: first num
 * @b: second num
 * Return: the sub of a and b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - product of two numbers
 * @a: first num
 * @b: second num
 * Return: the product of two numbers
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - return the qoutient of a and b
 * @a: first num
 * @b: second num
 * Return: the quotient
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - the modulus of two number
 * @a: fisrt num
 * @b: second num
 * Return: the reminder
 */

int mod(int a, int b)
{
	return (a % b);
}
