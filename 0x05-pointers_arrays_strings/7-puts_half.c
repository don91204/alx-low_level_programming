#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - function that prints half of a string, followed by a new line.
 *
 * @str: This is the input string
 */
void puts_half(char *str)
{
	int x, y, i;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (i = y; i < x; i++)
		putchar(str[i]);
	putchar('\n');
}
