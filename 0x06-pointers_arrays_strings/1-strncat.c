#include "main.h"
/**
 * _strncat - concatenates two strings for n number
 * @dest: first string
 *@src: second string
 *@n: number of characters of the second string to be concatenated
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
