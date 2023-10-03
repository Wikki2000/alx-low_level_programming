#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The destination to append the string
 * @src: The string to be concantenate
 *
 * Return: The resultant string
 */
char *_strcat(char *dest, char *src)
{
	/* move the ptr to end of dest string */
	while (*dest != '\0')
		dest++;

	/* Copy character from src to dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}
