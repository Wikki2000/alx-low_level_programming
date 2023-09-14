/**
 * _islower - Checks if alphabet is lower case
 * @c: The parameter that stores the alphabet
 *
 * Return: Returns "1" if alphabet is lower case, else return "0".
 */
int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
                return (1);

        else
                return (0);
}
