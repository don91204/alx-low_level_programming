#include "main.h"
/**
 * factorial  - write a function that return the factorial of a given number
 *  @n: number to find factorial of.
 *
 *  Return: factorial of number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * (factorial(n - 1)));
	}
}
