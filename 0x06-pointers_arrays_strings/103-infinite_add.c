#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Adds two positive numbers represented as strings
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result (r) or 0 if the result can't be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int sum, digit, index1, index2;
	int len1, len2, max_len;
	int result_index = max_len - 2;

	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;

	max_len = (len1 > len2) ? (len1 + 2) : (len2 + 2);

	if (size_r < max_len)
		return (0);

	index1 = len1 - 1;
	index2 = len2 - 1;

	r[max_len - 1] = '\0';

	while (index1 >= 0 || index2 >= 0)
	{
		int digit1 = (index1 >= 0) ? (n1[index1] - '0') : 0;
		int digit2 = (index2 >= 0) ? (n2[index2] - '0') : 0;

		sum = digit1 + digit2 + carry;
		digit = sum % 10;
		carry = sum / 10;

		r[result_index] = digit + '0';

		result_index--;

		if (index1 >= 0)
			index1--;
		if (index2 >= 0)
			index2--;
	}

	if (carry > 0)
	{
		if (result_index < 0)
			return (0);
		r[result_index] = carry + '0';
	}
	else
	{
		result_index++;
	}

	if (result_index > 0)
	{
		int i;

		for (i = 0; r[result_index + i] != '\0'; i++)
			r[i] = r[result_index + i];
		r[i] = '\0';
	}

	return (r);
}
