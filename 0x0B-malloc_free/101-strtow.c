#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * strtow - Splits a string into words.
 * @str: The input string to split.
 *
 * Return: A pointer to an array of strings (words).
 *         Each element of the array contains a single word, null-terminated.
 *         The last element of the returned array is NULL.
 *         Returns NULL if str is NULL or an empty string.
 */
char **strtow(char *str)
{
	char **words = NULL;
	char *token, *str_copy;
	int num_words = 0;
	int i, j;

	if (str == NULL || *str == '\0')
		return (NULL);

	str_copy = strdup(str);
	if (str_copy == NULL)
		return (NULL);

	token = strtok(str_copy, " ");
	while (token != NULL)
	{
		num_words++;
		token = strtok(NULL, " ");
	}

	free(str_copy);
	if (num_words == 0)
		return (NULL);

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		free(words);
		return (NULL);
	}

	token = strtok(str_copy, " ");
	i = 0;
	while (token != NULL)
	{
		words[i] = strdup(token);
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);

			free(words);
			free(str_copy);
			return NULL;
		}
		token = strtok(NULL, " ");
		i++;
	}

	words[num_words] = NULL;
	free(str_copy);

	return (words);
}
