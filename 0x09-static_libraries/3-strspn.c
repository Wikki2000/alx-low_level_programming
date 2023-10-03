#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing accepted characters
 *
 * Description:
 * This function calculates the length of the prefix substring in the string
 * pointed to by 's' that consists only of characters found in the 'accept'
 * string. It returns the number of bytes in the initial segment of 's' which
 * consist only of bytes from 'accept'.
 *
 * Return: The length of the prefix substring in 's'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				length++;
				break;
			}
			a++;
		}

		if (*a == '\0')
		{
			break;
		}

		s++;
	}

	return (length);
}

