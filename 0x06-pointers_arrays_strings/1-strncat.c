#include "main.h"


/**
 * _strncat - Concatenate n number of string
 * @src: The source of the string
 * @dest: The destination to concantenate the string
 * @n: The size of the string
 *
 * Return: The resultannt string
 */
char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
		dest++;

	/* Copy characters from src to dest up to a maximum of n characters */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (dest);
}
