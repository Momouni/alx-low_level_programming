#include "main.h"
/**
 * _strncpy - copy a string to another one
 * @dest: the initial string
 * @src: the string to be copied
 * @n: number of characters of the second string to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
