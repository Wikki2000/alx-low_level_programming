#include <stdio.h>
#include <stdlib.h>

/**
 * _str_concat - Concatenate two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: The address of the resultant string,
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	ptr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (i = 0; i <= len2; i++)
		ptr[len1 + i] = s2[i];


	return (ptr);
}
