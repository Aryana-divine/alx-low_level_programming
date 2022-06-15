#include "main.h"
#include <stdio.h>

/**
 * * _strcat - Concatenates two strings
 *
 * * @dest: The destination string
 *
 * * @src: The source string
 *
 * *
 *
 * * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int den = 0, i;

	while (dest[den])
	{
	den++;
	}
	for (i = 0; src[i] != 0; i++)
	{
	dest[den] = src[i];
	den++;
	}
	dest[den] = '\0';

	return (dest);

}
