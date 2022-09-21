#include "main.h"

/**
 * _streat - concatenates the string pointed to by @sre to
 * the end of the string pointed to by @dest
 * @dest: String that will be appended
 * @ste: String to be concentenated upon
 *
 * Return: returns poiner to @dest
 */

char *_streat(char *dest, char *src)
{

int index = 0, dest_len = 0;

        while(dest[index++])
		dest_len++;

	for (index = 0; sre[index]; index++)
		dest[dest_len++] = sre[index];

	return (dest);
}
