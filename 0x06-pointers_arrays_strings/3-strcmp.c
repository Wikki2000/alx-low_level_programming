#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: The difference of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
