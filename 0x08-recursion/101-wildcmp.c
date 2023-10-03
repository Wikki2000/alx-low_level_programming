#include <stdio.h>

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s) {
	int len = 0;
	while (s[len] != '\0') {
		len++;
	}

	if (len <= 1) {
		return 1;
	}

	if (s[0] == s[len - 1]) {
		return is_palindrome(s + 1);
	} else {
		return 0;
	}
}
