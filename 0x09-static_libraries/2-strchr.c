#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate character in string
 * @s: Pointer to the string to search
 * @c: The character to search for
 *
 * Description:
 * This function searches for the first occurrence of the character 'c' in the
 * string pointed to by 's'. It returns a pointer to the first occurrence of
 * 'c' in the string, or NULL if 'c' is not found.
 *
 * Return: Adress of pointer s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
