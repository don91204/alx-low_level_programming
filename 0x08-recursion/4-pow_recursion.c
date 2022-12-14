#include "main.h"

/**
 * _pow_recursion - a function that return the value of x raised to power y
 * @x: the value to be raised by the power of y
 * @y: the value used to raise the value of x
 *
 * Return: the x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
