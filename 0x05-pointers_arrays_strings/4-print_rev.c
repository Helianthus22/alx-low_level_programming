#include <string.h>
#include "main.h"

/**
 * print_rev - prints string in reversed order
 *
 * @str: string to be reversed
 * Return: Null
 */
void print_rev(char *str)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
	_putchar(s[i]);
	i--;
	}
	_putchar('\n');
}

