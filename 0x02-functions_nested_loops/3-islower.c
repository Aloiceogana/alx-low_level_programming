#include "main.h"
/**
 * _islower - function to check lower case character
 * @c: is the int that will use for the argument to the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
