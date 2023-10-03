#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str) {
	bool capitalize = true;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (is_separator(str[i]))
			capitalize = true;
		else if (capitalize)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 'a' + 'A';
			capitalize = false;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] - 'A' + 'a';
		}
	}

	return (str);
}
