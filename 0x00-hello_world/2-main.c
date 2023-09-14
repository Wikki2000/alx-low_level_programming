/**
 * print_alphabet_x10 - Print an array of alphabet (10 x 27)
 */
void print_alphabet_x10(void)
{
        int i;

        for (i = 0; i <= 10; i++)
        {
                char alpha = 'a';

                while (alpha <= 'z')
                {
                        _putchar(alpha);
                        alpha++;
                }

                _putchar('\n');
        }
}
