#include "main.h"

/**
 * _puts - prints astring to stdout
 * @str - a string to be printed
 * Return void
 */
void _puts(char *str)
{
	int tr;

	for (tr = 0 *(str + tr) != '\0'; tr++)
	_putchar(*(str + tr));
	_putchar('\n');
}
