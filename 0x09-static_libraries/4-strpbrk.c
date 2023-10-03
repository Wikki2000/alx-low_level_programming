#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: Pointer to the string to search
 * @accept: Pointer to the set of bytes to search for
 *
 * Description:
 * This function locates the first occurrence in the string 's' of any of the
 * bytes in the string 'accept'. It returns a pointer to the byte in 's' that
 * matches one of the bytes in 'accept', or NULL if no such byte is found.
 *
 * Return: A pointer to the first matching byte in 's', or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}

		s++;
	}

	return (NULL);
}
