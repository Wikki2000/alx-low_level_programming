#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @s: The string to be encoded.
 *
 * Description:
 * This function encodes the input string @s using the ROT13 algorithm,
 * which is a simple letter substitution cipher that rotates letters.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	char *p = s;

	while (*s)
	{
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
				*s += 13;
			else 
				*s -= 13;
		}
		s++;
	}

	return (p);
}

