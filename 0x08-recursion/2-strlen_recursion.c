#include "main.h"

/**
 * _strlen_recursion - write a function that returns the lenght of a string
 *
 * @s: pointer that returns string
 *
 * Return: lenght of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + (s + 1));
}
