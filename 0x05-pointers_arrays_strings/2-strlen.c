#include "main.h"
#include <string.h>


/**
 * _strlen - a function that returns the length of a string
 *
 * @s: an input string
 * Return: Nothing.
 */
int _strlen(char *s);
{
	char str;
	int len;

	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

