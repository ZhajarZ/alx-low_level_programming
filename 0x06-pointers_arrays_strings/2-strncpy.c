#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer to the buffer to copy the string to
 * @src: pointer to the string to copy
 * @n: number of bytes to copy from src
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
