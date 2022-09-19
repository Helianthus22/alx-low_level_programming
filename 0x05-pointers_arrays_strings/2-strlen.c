#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: an input string
 * Return: Always 0.
 */
int _strlen(char *s);
{
	char *s;
	int len;

	*s = "My own string";
	len = _strlen(*s);
	_putchar("%d\n", len);
	return (0);
}
