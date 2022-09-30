#include "main.h"

/**
 * _memset - Fills a memory block with constant byte
 * @s: Address to memory block
 * @b: char to be used
 * @n: The number of bytes to use
 *
 * Return: A pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
