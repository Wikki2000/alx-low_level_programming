/**
 * _isalpha - Checks if a character is an alphabetic character.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return 1; // Character is alphabetic
	}
	else
	{
		return 0; // Character is not alphabetic
	}
}
