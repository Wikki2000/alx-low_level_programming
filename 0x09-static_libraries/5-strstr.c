#include <stddef.h>
#include "main.h"

/**
 * _strstr - Locate a substring in a string
 * @haystack: Pointer to the string to search in
 * @needle: Pointer to the substring to find
 *
 * Description:
 * This function finds the first occurrence of the substring 'needle' in the
 * string 'haystack'. The terminating null bytes ('\0') are not compared.
 * It returns a pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}

