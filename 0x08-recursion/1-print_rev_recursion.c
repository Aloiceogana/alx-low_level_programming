#include "main.h"

/**
 * _print_rev_recursion - prints a sring in reverse
 * @: string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + l);
		_putchar(*s);
	}
}
