#include "main.h"

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
	{
		len++;
	}

	return is_palindrome_helper(s, 0, len - 1);
}

/**
 * is_palindrome_helper - Helper function to check if a substring is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the substring.
 * @end: The ending index of the substring.
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
}
	return is_palindrome_helper(s, start + 1, end - 1);
}
