/**
 * _isalpha - Checks if alphabet is lower case
 * @c: The parameter that stores the alphabet
 *
 * Return: Returns "1" if alphabet is lower or upper case,
 * else return "0".
 */
int _isalpha(int c)
{
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
                return (1);

        else
                return (0);
}
