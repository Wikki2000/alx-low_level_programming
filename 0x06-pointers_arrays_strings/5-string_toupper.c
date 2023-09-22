#include "main.h"

/**
 * string_toupper - Convert all lowercase letters in a string to uppercase.
 * @str: Pointer to the input string.
 *
 * Description: This function takes a pointer to a string and converts
 *              all lowercase letters in the string to uppercase.
 *
 * Return: Pointer to the modified string (same as input str).
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 'a' + 'A';
		str++;
	}

	return (str);
}
